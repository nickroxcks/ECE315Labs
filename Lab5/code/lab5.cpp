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

/**
 * ECE 315 Lab 5 
 * Nicholas Serrano
 * Evan Timms
*/

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
	//initializations
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


void motorHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];
	if((sock > 0) && (url != NULL)) {
		// check if correct form
		if(strcmp("validate_motor", myData.GetPost()) == 0){
			//upon success, put task in the que
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


void keypadHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		// check if correct form
		if(strcmp("read_keypad", myData.GetPost()) == 0){
			if(myData.GetKeypadKey() < 16){
				// show key value
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad%d.bmp' BORDER='0'>", (int) myData.GetKeypadKey() );
				writestring(sock,(const char *) buffer);
			// empty case/ incorrect case
			}else{
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad_empty.bmp' BORDER='0'>" );
				writestring(sock,(const char *) buffer);
			}
		}else{
			if(myData.GetKeypadKey() < 16){
				// show key value
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad%d.bmp' BORDER='0'>", (int) myData.GetKeypadKey() );
				writestring(sock,(const char *) buffer);
			}else{
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='Keypad_empty.bmp' BORDER='0'>" );
				writestring(sock,(const char *) buffer);
			}
		}

	}
}

void ADHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		if(strcmp("read_sensor", myData.GetPost()) == 0){
			if(myData.isValid()){
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='BarGraph%d.bmp' BORDER='0'>", (int) myData.GetADSegment() );
				writestring(sock,(const char *) buffer);
			}
		}
		// bad request. show nothing
		else{
			snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<IMG SRC='BarGraph%d.bmp' BORDER='0'>", (int) myData.GetADSegment() );
			writestring(sock,(const char *) buffer);
		}
	}
}

void LCDHandler( int sock, PCSTR url )
{
	char buffer[MAX_COUNTER_BUFFER_LENGTH+1];

	if((sock > 0) && (url != NULL)) {
		if(strcmp("validate_string", myData.GetPost()) == 0){
			if(myData.isValid()){
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, " " );
			}else{
				snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, "<strong>INVALID: %s</strong>", myData.GetMessage() );
			}
			writestring(sock,(const char *) buffer);
		}else{
			snprintf(buffer,MAX_COUNTER_BUFFER_LENGTH, " " );
			writestring(sock,(const char *) buffer);
		}

	}
}
