/*
 * keypad.h
 *
 * Created: 28/3/2018 10:57:06 AM
 *  Author: adham
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "keypadconfig.h"

//Function prototypes
void vKeypadInit(void);
unsigned char ucKeypadScan(void);
static const unsigned char g_Keypad_Mapping[4][4];

//Macros
#define INPUT_STATE				0U
#define OUTPUT_STATE			1U
#define NO_OUTPUT_STATE			1U
#define NO_VALID_INPUT			0xFF
#define INPUT_IS_STILL_VALID	((LINE0_DATAIN&(1U<<LINE0))\
								&& (LINE1_DATAIN&(1U<<LINE1))\
								&& (LINE2_DATAIN&(1U<<LINE2))\
								&& (LINE3_DATAIN&(1U<<LINE3)))
#endif /* KEYPAD_H_ */