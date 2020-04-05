/*
 * bitmaps.h
 *
 *  Created on: Dec 13, 2016
 *      Author: nem1
 */

#ifndef BITMAPS_H_
#define BITMAPS_H_

#include "point.h"

#ifndef SCREEN_SIZE
#define SCREEN_SIZE 504 // 84 X 48 pixel screen = 504 BYTES for the Nokia 5110
#endif



const BYTE xkcdSandwich[SCREEN_SIZE]= {
0xFF, 0x8D, 0x9F, 0x13, 0x13, 0xF3, 0x01, 0x01, 0xF9, 0xF9, 0x01, 0x81, 0xF9, 0xF9, 0x01, 0xF1,
0xF9, 0x09, 0x09, 0xFF, 0xFF, 0xF1, 0xF9, 0x09, 0x09, 0xF9, 0xF1, 0x01, 0x01, 0x01, 0x01, 0x01,
0xF9, 0xF9, 0x09, 0xF9, 0x09, 0xF9, 0xF1, 0x01, 0xC1, 0xE9, 0x29, 0x29, 0xF9, 0xF1, 0x01, 0xFF,
0xFF, 0x71, 0xD9, 0x01, 0x01, 0xF1, 0xF9, 0x29, 0x29, 0xB9, 0xB1, 0x01, 0x01, 0x01, 0xF1, 0xF1,
0x11, 0xF1, 0xF1, 0xF1, 0xE1, 0x01, 0xE1, 0xF1, 0x51, 0x51, 0x71, 0x61, 0x01, 0x01, 0xC1, 0xF1,
0x31, 0x31, 0xF1, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x01, 0x01, 0x60, 0xE0, 0xA0, 0x01, 0x01, 0x81,
0xE1, 0x61, 0x60, 0xC0, 0x01, 0xE1, 0xE1, 0x21, 0x21, 0xE0, 0xC1, 0x01, 0xC1, 0xE1, 0x20, 0x20,
0xFC, 0xFC, 0xE0, 0xE0, 0xC1, 0xE1, 0xE0, 0xC1, 0xE0, 0xE1, 0x01, 0xFC, 0xFC, 0x21, 0x21, 0xE1,
0xC1, 0xE5, 0xE4, 0x01, 0xC1, 0xE0, 0x20, 0x21, 0x20, 0x00, 0x01, 0xFD, 0xFD, 0x21, 0x20, 0xE0,
0x00, 0x00, 0x01, 0x01, 0xC0, 0x61, 0x31, 0x31, 0x21, 0x20, 0xC0, 0x81, 0x01, 0x01, 0x01, 0x00,
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02,
0x03, 0x01, 0x00, 0x01, 0x03, 0xF2, 0x1A, 0x0B, 0x08, 0x0B, 0x1B, 0x10, 0x60, 0xE3, 0x03, 0x00,
0x01, 0x03, 0x02, 0x02, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x03,
0x03, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x00, 0x01, 0x03, 0x02, 0x02, 0x03, 0x01, 0x00, 0x03,
0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3E, 0x63, 0x80, 0x80, 0x80, 0x80, 0x60, 0x3F, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0x01, 0x01, 0x02, 0x03, 0x3E, 0xE8, 0xF8, 0xF0, 0xD0, 0x90,
0x18, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x38, 0xFF,
0x0C, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33,
0x5F, 0x8F, 0x84, 0x05, 0x07, 0x06, 0x0C, 0x0E, 0x0E, 0x0C, 0x14, 0x34, 0x68, 0x88, 0xD8, 0x70,
0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0xE0, 0x00, 0xF0, 0xF0, 0x00, 0x80,
0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x20, 0x38,
0x0E, 0x01, 0xC0, 0x3F, 0xE0, 0x00, 0x00, 0x03, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xB6, 0xED, 0xC0, 0xC0,
0xC0, 0xE0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xE1, 0xE1, 0xC1,
0xEF, 0xBB, 0x83, 0x86, 0x88, 0xB0, 0x80, 0x80, 0x80, 0x8F, 0x90, 0x90, 0x90, 0x9F, 0x8F, 0x80,
0x9F, 0x9F, 0x87, 0x8D, 0x98, 0x80, 0x8C, 0x9E, 0x92, 0x92, 0x9F, 0xC0, 0xC7, 0xFF, 0xB8, 0x8F,
0x80, 0x90, 0x90, 0xC0, 0xF0, 0x8E, 0x81, 0x80, 0x81, 0x8F, 0xB8, 0xE0, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF
};

const BYTE clear_array[SCREEN_SIZE] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

const BYTE ASCII[][5] =
{
 {0x00, 0x00, 0x00, 0x00, 0x00} // 20
,{0x00, 0x00, 0x5f, 0x00, 0x00} // 21 !
,{0x00, 0x07, 0x00, 0x07, 0x00} // 22 "
,{0x14, 0x7f, 0x14, 0x7f, 0x14} // 23 #
,{0x24, 0x2a, 0x7f, 0x2a, 0x12} // 24 $
,{0x23, 0x13, 0x08, 0x64, 0x62} // 25 %
,{0x36, 0x49, 0x55, 0x22, 0x50} // 26 &
,{0x00, 0x05, 0x03, 0x00, 0x00} // 27 '
,{0x00, 0x1c, 0x22, 0x41, 0x00} // 28 (
,{0x00, 0x41, 0x22, 0x1c, 0x00} // 29 )
,{0x14, 0x08, 0x3e, 0x08, 0x14} // 2a *
,{0x08, 0x08, 0x3e, 0x08, 0x08} // 2b +
,{0x00, 0x50, 0x30, 0x00, 0x00} // 2c ,
,{0x08, 0x08, 0x08, 0x08, 0x08} // 2d -
,{0x00, 0x60, 0x60, 0x00, 0x00} // 2e .
,{0x20, 0x10, 0x08, 0x04, 0x02} // 2f /
,{0x3e, 0x51, 0x49, 0x45, 0x3e} // 30 0
,{0x00, 0x42, 0x7f, 0x40, 0x00} // 31 1
,{0x42, 0x61, 0x51, 0x49, 0x46} // 32 2
,{0x21, 0x41, 0x45, 0x4b, 0x31} // 33 3
,{0x18, 0x14, 0x12, 0x7f, 0x10} // 34 4
,{0x27, 0x45, 0x45, 0x45, 0x39} // 35 5
,{0x3c, 0x4a, 0x49, 0x49, 0x30} // 36 6
,{0x01, 0x71, 0x09, 0x05, 0x03} // 37 7
,{0x36, 0x49, 0x49, 0x49, 0x36} // 38 8
,{0x06, 0x49, 0x49, 0x29, 0x1e} // 39 9
,{0x00, 0x36, 0x36, 0x00, 0x00} // 3a :
,{0x00, 0x56, 0x36, 0x00, 0x00} // 3b ;
,{0x08, 0x14, 0x22, 0x41, 0x00} // 3c <
,{0x14, 0x14, 0x14, 0x14, 0x14} // 3d =
,{0x00, 0x41, 0x22, 0x14, 0x08} // 3e >
,{0x02, 0x01, 0x51, 0x09, 0x06} // 3f ?
,{0x32, 0x49, 0x79, 0x41, 0x3e} // 40 @
,{0x7e, 0x11, 0x11, 0x11, 0x7e} // 41 A
,{0x7f, 0x49, 0x49, 0x49, 0x36} // 42 B
,{0x3e, 0x41, 0x41, 0x41, 0x22} // 43 C
,{0x7f, 0x41, 0x41, 0x22, 0x1c} // 44 D
,{0x7f, 0x49, 0x49, 0x49, 0x41} // 45 E
,{0x7f, 0x09, 0x09, 0x09, 0x01} // 46 F
,{0x3e, 0x41, 0x49, 0x49, 0x7a} // 47 G
,{0x7f, 0x08, 0x08, 0x08, 0x7f} // 48 H
,{0x00, 0x41, 0x7f, 0x41, 0x00} // 49 I
,{0x20, 0x40, 0x41, 0x3f, 0x01} // 4a J
,{0x7f, 0x08, 0x14, 0x22, 0x41} // 4b K
,{0x7f, 0x40, 0x40, 0x40, 0x40} // 4c L
,{0x7f, 0x02, 0x0c, 0x02, 0x7f} // 4d M
,{0x7f, 0x04, 0x08, 0x10, 0x7f} // 4e N
,{0x3e, 0x41, 0x41, 0x41, 0x3e} // 4f O
,{0x7f, 0x09, 0x09, 0x09, 0x06} // 50 P
,{0x3e, 0x41, 0x51, 0x21, 0x5e} // 51 Q
,{0x7f, 0x09, 0x19, 0x29, 0x46} // 52 R
,{0x46, 0x49, 0x49, 0x49, 0x31} // 53 S
,{0x01, 0x01, 0x7f, 0x01, 0x01} // 54 T
,{0x3f, 0x40, 0x40, 0x40, 0x3f} // 55 U
,{0x1f, 0x20, 0x40, 0x20, 0x1f} // 56 V
,{0x3f, 0x40, 0x38, 0x40, 0x3f} // 57 W
,{0x63, 0x14, 0x08, 0x14, 0x63} // 58 X
,{0x07, 0x08, 0x70, 0x08, 0x07} // 59 Y
,{0x61, 0x51, 0x49, 0x45, 0x43} // 5a Z
,{0x00, 0x7f, 0x41, 0x41, 0x00} // 5b [
,{0x02, 0x04, 0x08, 0x10, 0x20} // 5c �
,{0x00, 0x41, 0x41, 0x7f, 0x00} // 5d ]
,{0x04, 0x02, 0x01, 0x02, 0x04} // 5e ^
,{0x40, 0x40, 0x40, 0x40, 0x40} // 5f _
,{0x00, 0x01, 0x02, 0x04, 0x00} // 60 `
,{0x20, 0x54, 0x54, 0x54, 0x78} // 61 a
,{0x7f, 0x48, 0x44, 0x44, 0x38} // 62 b
,{0x38, 0x44, 0x44, 0x44, 0x20} // 63 c
,{0x38, 0x44, 0x44, 0x48, 0x7f} // 64 d
,{0x38, 0x54, 0x54, 0x54, 0x18} // 65 e
,{0x08, 0x7e, 0x09, 0x01, 0x02} // 66 f
,{0x0c, 0x52, 0x52, 0x52, 0x3e} // 67 g
,{0x7f, 0x08, 0x04, 0x04, 0x78} // 68 h
,{0x00, 0x44, 0x7d, 0x40, 0x00} // 69 i
,{0x20, 0x40, 0x44, 0x3d, 0x00} // 6a j
,{0x7f, 0x10, 0x28, 0x44, 0x00} // 6b k
,{0x00, 0x41, 0x7f, 0x40, 0x00} // 6c l
,{0x7c, 0x04, 0x18, 0x04, 0x78} // 6d m
,{0x7c, 0x08, 0x04, 0x04, 0x78} // 6e n
,{0x38, 0x44, 0x44, 0x44, 0x38} // 6f o
,{0x7c, 0x14, 0x14, 0x14, 0x08} // 70 p
,{0x08, 0x14, 0x14, 0x18, 0x7c} // 71 q
,{0x7c, 0x08, 0x04, 0x04, 0x08} // 72 r
,{0x48, 0x54, 0x54, 0x54, 0x20} // 73 s
,{0x04, 0x3f, 0x44, 0x40, 0x20} // 74 t
,{0x3c, 0x40, 0x40, 0x20, 0x7c} // 75 u
,{0x1c, 0x20, 0x40, 0x20, 0x1c} // 76 v
,{0x3c, 0x40, 0x30, 0x40, 0x3c} // 77 w
,{0x44, 0x28, 0x10, 0x28, 0x44} // 78 x
,{0x0c, 0x50, 0x50, 0x50, 0x3c} // 79 y
,{0x44, 0x64, 0x54, 0x4c, 0x44} // 7a z
,{0x00, 0x08, 0x36, 0x41, 0x00} // 7b {
,{0x00, 0x00, 0x7f, 0x00, 0x00} // 7c |
,{0x00, 0x41, 0x36, 0x08, 0x00} // 7d }
,{0x10, 0x08, 0x08, 0x10, 0x08} // 7e left arrow
,{0x78, 0x46, 0x41, 0x46, 0x78} // 7f right arrow
};

#define CHAR_SIZE 7

const BYTE ASCII_7[][CHAR_SIZE] =
{
 {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00} // 20
,{0x00,0x00, 0x00, 0x5f, 0x00, 0x00,0x00} // 21 !
,{0x00,0x00, 0x07, 0x00, 0x07, 0x00,0x00} // 22 "
,{0x00,0x14, 0x7f, 0x14, 0x7f, 0x14,0x00} // 23 #
,{0x00,0x24, 0x2a, 0x7f, 0x2a, 0x12,0x00} // 24 $
,{0x00,0x23, 0x13, 0x08, 0x64, 0x62,0x00} // 25 %
,{0x00,0x36, 0x49, 0x55, 0x22, 0x50,0x00} // 26 &
,{0x00,0x00, 0x05, 0x03, 0x00, 0x00,0x00} // 27 '
,{0x00,0x00, 0x1c, 0x22, 0x41, 0x00,0x00} // 28 (
,{0x00,0x00, 0x41, 0x22, 0x1c, 0x00,0x00} // 29 )
,{0x00,0x14, 0x08, 0x3e, 0x08, 0x14,0x00} // 2a *
,{0x00,0x08, 0x08, 0x3e, 0x08, 0x08,0x00} // 2b +
,{0x00,0x00, 0x50, 0x30, 0x00, 0x00,0x00} // 2c ,
,{0x00,0x08, 0x08, 0x08, 0x08, 0x08,0x00} // 2d -
,{0x00,0x00, 0x60, 0x60, 0x00, 0x00,0x00} // 2e .
,{0x00,0x20, 0x10, 0x08, 0x04, 0x02,0x00} // 2f /
,{0x00,0x3e, 0x51, 0x49, 0x45, 0x3e,0x00} // 30 0
,{0x00,0x00, 0x42, 0x7f, 0x40, 0x00,0x00} // 31 1
,{0x00,0x42, 0x61, 0x51, 0x49, 0x46,0x00} // 32 2
,{0x00,0x21, 0x41, 0x45, 0x4b, 0x31,0x00} // 33 3
,{0x00,0x18, 0x14, 0x12, 0x7f, 0x10,0x00} // 34 4
,{0x00,0x27, 0x45, 0x45, 0x45, 0x39,0x00} // 35 5
,{0x00,0x3c, 0x4a, 0x49, 0x49, 0x30,0x00} // 36 6
,{0x00,0x01, 0x71, 0x09, 0x05, 0x03,0x00} // 37 7
,{0x00,0x36, 0x49, 0x49, 0x49, 0x36,0x00} // 38 8
,{0x00,0x06, 0x49, 0x49, 0x29, 0x1e,0x00} // 39 9
,{0x00,0x00, 0x36, 0x36, 0x00, 0x00,0x00} // 3a :
,{0x00,0x00, 0x56, 0x36, 0x00, 0x00,0x00} // 3b ;
,{0x00,0x08, 0x14, 0x22, 0x41, 0x00,0x00} // 3c <
,{0x00,0x14, 0x14, 0x14, 0x14, 0x14,0x00} // 3d =
,{0x00,0x00, 0x41, 0x22, 0x14, 0x08,0x00} // 3e >
,{0x00,0x02, 0x01, 0x51, 0x09, 0x06,0x00} // 3f ?
,{0x00,0x32, 0x49, 0x79, 0x41, 0x3e,0x00} // 40 @
,{0x00,0x7e, 0x11, 0x11, 0x11, 0x7e,0x00} // 41 A
,{0x00,0x7f, 0x49, 0x49, 0x49, 0x36,0x00} // 42 B
,{0x00,0x3e, 0x41, 0x41, 0x41, 0x22,0x00} // 43 C
,{0x00,0x7f, 0x41, 0x41, 0x22, 0x1c,0x00} // 44 D
,{0x00,0x7f, 0x49, 0x49, 0x49, 0x41,0x00} // 45 E
,{0x00,0x7f, 0x09, 0x09, 0x09, 0x01,0x00} // 46 F
,{0x00,0x3e, 0x41, 0x49, 0x49, 0x7a,0x00} // 47 G
,{0x00,0x7f, 0x08, 0x08, 0x08, 0x7f,0x00} // 48 H
,{0x00,0x00, 0x41, 0x7f, 0x41, 0x00,0x00} // 49 I
,{0x00,0x20, 0x40, 0x41, 0x3f, 0x01,0x00} // 4a J
,{0x00,0x7f, 0x08, 0x14, 0x22, 0x41,0x00} // 4b K
,{0x00,0x7f, 0x40, 0x40, 0x40, 0x40,0x00} // 4c L
,{0x00,0x7f, 0x02, 0x0c, 0x02, 0x7f,0x00} // 4d M
,{0x00,0x7f, 0x04, 0x08, 0x10, 0x7f,0x00} // 4e N
,{0x00,0x3e, 0x41, 0x41, 0x41, 0x3e,0x00} // 4f O
,{0x00,0x7f, 0x09, 0x09, 0x09, 0x06,0x00} // 50 P
,{0x00,0x3e, 0x41, 0x51, 0x21, 0x5e,0x00} // 51 Q
,{0x00,0x7f, 0x09, 0x19, 0x29, 0x46,0x00} // 52 R
,{0x00,0x46, 0x49, 0x49, 0x49, 0x31,0x00} // 53 S
,{0x00,0x01, 0x01, 0x7f, 0x01, 0x01,0x00} // 54 T
,{0x00,0x3f, 0x40, 0x40, 0x40, 0x3f,0x00} // 55 U
,{0x00,0x1f, 0x20, 0x40, 0x20, 0x1f,0x00} // 56 V
,{0x00,0x3f, 0x40, 0x38, 0x40, 0x3f,0x00} // 57 W
,{0x00,0x63, 0x14, 0x08, 0x14, 0x63,0x00} // 58 X
,{0x00,0x07, 0x08, 0x70, 0x08, 0x07,0x00} // 59 Y
,{0x00,0x61, 0x51, 0x49, 0x45, 0x43,0x00} // 5a Z
,{0x00,0x00, 0x7f, 0x41, 0x41, 0x00,0x00} // 5b [
,{0x00,0x02, 0x04, 0x08, 0x10, 0x20,0x00} // 5c �
,{0x00,0x00, 0x41, 0x41, 0x7f, 0x00,0x00} // 5d ]
,{0x00,0x04, 0x02, 0x01, 0x02, 0x04,0x00} // 5e ^
,{0x00,0x40, 0x40, 0x40, 0x40, 0x40,0x00} // 5f _
,{0x00,0x00, 0x01, 0x02, 0x04, 0x00,0x00} // 60 `
,{0x00,0x20, 0x54, 0x54, 0x54, 0x78,0x00} // 61 a
,{0x00,0x7f, 0x48, 0x44, 0x44, 0x38,0x00} // 62 b
,{0x00,0x38, 0x44, 0x44, 0x44, 0x20,0x00} // 63 c
,{0x00,0x38, 0x44, 0x44, 0x48, 0x7f,0x00} // 64 d
,{0x00,0x38, 0x54, 0x54, 0x54, 0x18,0x00} // 65 e
,{0x00,0x08, 0x7e, 0x09, 0x01, 0x02,0x00} // 66 f
,{0x00,0x0c, 0x52, 0x52, 0x52, 0x3e,0x00} // 67 g
,{0x00,0x7f, 0x08, 0x04, 0x04, 0x78,0x00} // 68 h
,{0x00,0x00, 0x44, 0x7d, 0x40, 0x00,0x00} // 69 i
,{0x00,0x20, 0x40, 0x44, 0x3d, 0x00,0x00} // 6a j
,{0x00,0x7f, 0x10, 0x28, 0x44, 0x00,0x00} // 6b k
,{0x00,0x00, 0x41, 0x7f, 0x40, 0x00,0x00} // 6c l
,{0x00,0x7c, 0x04, 0x18, 0x04, 0x78,0x00} // 6d m
,{0x00,0x7c, 0x08, 0x04, 0x04, 0x78,0x00} // 6e n
,{0x00,0x38, 0x44, 0x44, 0x44, 0x38,0x00} // 6f o
,{0x00,0x7c, 0x14, 0x14, 0x14, 0x08,0x00} // 70 p
,{0x00,0x08, 0x14, 0x14, 0x18, 0x7c,0x00} // 71 q
,{0x00,0x7c, 0x08, 0x04, 0x04, 0x08,0x00} // 72 r
,{0x00,0x48, 0x54, 0x54, 0x54, 0x20,0x00} // 73 s
,{0x00,0x04, 0x3f, 0x44, 0x40, 0x20,0x00} // 74 t
,{0x00,0x3c, 0x40, 0x40, 0x20, 0x7c,0x00} // 75 u
,{0x00,0x1c, 0x20, 0x40, 0x20, 0x1c,0x00} // 76 v
,{0x00,0x3c, 0x40, 0x30, 0x40, 0x3c,0x00} // 77 w
,{0x00,0x44, 0x28, 0x10, 0x28, 0x44,0x00} // 78 x
,{0x00,0x0c, 0x50, 0x50, 0x50, 0x3c,0x00} // 79 y
,{0x00,0x44, 0x64, 0x54, 0x4c, 0x44,0x00} // 7a z
,{0x00,0x00, 0x08, 0x36, 0x41, 0x00,0x00} // 7b {
,{0x00,0x00, 0x00, 0x7f, 0x00, 0x00,0x00} // 7c |
,{0x00,0x00, 0x41, 0x36, 0x08, 0x00,0x00} // 7d }
,{0x00,0x10, 0x08, 0x08, 0x10, 0x08,0x00} // 7e left arrow
,{0x00,0x78, 0x46, 0x41, 0x46, 0x78,0x00} // 7f right arrow
};

const point char_index[] = {
		{0,0},{7,0},{14,0},{21,0},{28,0},{35,0},{42,0},{49,0},{56,0},{63,0},{70,0},{77,0},
		{0,1},{7,1},{14,1},{21,1},{28,1},{35,1},{42,1},{49,1},{56,1},{63,1},{70,1},{77,1},
		{0,2},{7,2},{14,2},{21,2},{28,2},{35,2},{42,2},{49,2},{56,2},{63,2},{70,2},{77,2},
		{0,3},{7,3},{14,3},{21,3},{28,3},{35,3},{42,3},{49,3},{56,3},{63,3},{70,3},{77,3},
		{0,4},{7,4},{14,4},{21,4},{28,4},{35,4},{42,4},{49,4},{56,4},{63,4},{70,4},{77,4},
		{0,5},{7,5},{14,5},{21,5},{28,5},{35,5},{42,5},{49,5},{56,5},{63,5},{70,5},{77,5},
};

// indexes in the char_index array for all interesting locations on the LCD by line

#define LINE1_ORIGIN 0
#define LINE1_END 	 11
#define LINE2_ORIGIN 12
#define LINE2_END 	 23
#define LINE3_ORIGIN 24
#define LINE3_END	 35
#define LINE4_ORIGIN 36
#define LINE4_END 	 47
#define LINE5_ORIGIN 48
#define LINE5_END	 59
#define LINE6_ORIGIN 60
#define LINE6_END	 71




#endif /* BITMAPS_H_ */
