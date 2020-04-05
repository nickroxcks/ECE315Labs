#include <predef.h>
#include <stdio.h>
#include <ctype.h>
#include <startnet.h>
#include <autoupdate.h>
#include <smarttrap.h>
#include <taskmon.h>
#include <NetworkDebug.h>
#include "error_wrapper.h"
#include "LCD.h"
#include "Keypad.h"
#include "AD.h"
#include "Stepper.h"
#include "Formdata.h"
#include <string.h>


#define MAX_COUNTER_BUFFER_LENGTH 100
#define NUM_ELEMENTS 128


extern "C" {
void UserMain(void * pd);
void DisplayLameCounter( int sock, PCSTR url );
void motorHandler( int sock, PCSTR url );
void keypadHandler( int sock, PCSTR url );
void LCDHandler( int sock, PCSTR url );
void ADHandler( int sock, PCSTR url );
}

extern void RegisterPost();

const char * AppName="Put your name here";

LCD myLCD;
Keypad myKeypad;
AD myAD;
Stepper myStepper;
FormData myData;
OS_Q MyQueue;
void * MyQueueStorage[NUM_ELEMENTS];


void UserMain(void * pd) {
	BYTE err = OS_NO_ERR;
    InitializeStack();
    OSChangePrio(MAIN_PRIO);
    EnableAutoUpdate();
    StartHTTP();
    EnableTaskMonitor();

    #ifndef _DEBUG
    EnableSmartTraps();
    #endif

    #ifdef _DEBUG
    InitializeNetworkGDB_and_Wait();
    #endif

    myStepper.Init(STEPPER_MODE_FULL_STEP);
    myKeypad.Init(KEYPAD_POLL_MODE);  // Interrupts would work too
    myData.Init();
    myLCD.Init();
    myLCD.Clear();
    myAD.Init();
	RegisterPost();
	OSQInit(& MyQueue,MyQueueStorage,NUM_ELEMENTS);

	iprintf("Application started\n");
    while (1) {
    	if (myData.GetMotorStatus()){
			// Use received data to run motor
			myStepper.SetMode(myData.GetMotorMode());
			myStepper.Step(myData.GetMotorDirection(), myData.GetMotorSteps() * myData.GetMotorRotations());
			myStepper.Enable();
    	}
    	myData.SetMotorStatus(NOT_RUNNING);
    	OSTimeDly(TICKS_PER_SECOND);
    }
}

void DisplayLameCounter( int sock, PCSTR url )
{
	static int form_counter = 0;
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		iprintf(url);
		snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<H1>The page has been reloaded %d times. </H1>", form_counter );
		form_counter++;
		writestring(sock,(const char *) buffer);
		myData.SetPost("");
	}
}

void motorHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];
	if((sock > 0) && (url != NULL)) {
		// If Proper form request sent
		if(strcmp("validate_motor", myData.GetPost()) == 0){
			// If no error occurred Display nothing and put motor request in queue
			if(myData.isValid()){
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, " " );
			// If error occurred display error
			}else if(!myData.isValid()){
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<strong>INVALID: %s</strong>", myData.GetMessage() );
			}
			writestring(sock,(const char *) buffer);
		}
	}
}


void keypadHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		// If Proper form request sent
		if(strcmp("read_keypad", myData.GetPost()) == 0){
			// If valid keypad key pressed
			if(myData.GetKeypadKey() < 16){
				// Display which key was pressed in keypad
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad%d.bmp' BORDER='0'>", (int) myData.GetKeypadKey() );
				writestring(sock,(const char *) buffer);
			// Otherwise display empty keypad
			}else{
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad_empty.bmp' BORDER='0'>" );
				writestring(sock,(const char *) buffer);
			}
			// Display empty keypad if different post requested
		}else{
			if(myData.GetKeypadKey() < 16){
				// Display which key was pressed in keypad
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad%d.bmp' BORDER='0'>", (int) myData.GetKeypadKey() );
				writestring(sock,(const char *) buffer);
			// Otherwise display empty keypad
			}else{
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad_empty.bmp' BORDER='0'>" );
				writestring(sock,(const char *) buffer);
			}
		}

	}
}

void LCDHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		// If Proper form request sent
		if(strcmp("validate_string", myData.GetPost()) == 0){
			// If Valid string is given
			if(myData.isValid()){
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, " " );
			}else{
				// Display error otherwise
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<strong>INVALID: %s</strong>", myData.GetMessage() );
			}
			writestring(sock,(const char *) buffer);
		}else{
			// Display nothing If improper form request sent
			snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, " " );
			writestring(sock,(const char *) buffer);
		}

	}
}


void ADHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		// If Proper form request sent
		if(strcmp("read_sensor", myData.GetPost()) == 0){
			if(myData.isValid()){
				// Display bar graph based on read level from sensor
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='BarGraph%d.bmp' BORDER='0'>", (int) myData.GetADSegment() );
				writestring(sock,(const char *) buffer);
			}
		}
		// Display nothing If improper form request sent
		else{
			snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='BarGraph%d.bmp' BORDER='0'>", (int) myData.GetADSegment() );
			writestring(sock,(const char *) buffer);
		}
	}
}
