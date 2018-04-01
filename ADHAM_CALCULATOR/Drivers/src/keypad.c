/*
 * keypad.c
 *
 * Created: 28/3/2018 11:03:21 AM
 *  Author: adham
 */ 

#include "keypad.h"

static const unsigned char g_Keypad_Mapping[4][4] = {
	{'7','8','9','/'},
	{'4','5','6','*'},
	{'1','2','3','-'},
	{'C','0','=','+'}
	};


void vKeypadInit(void)
{
	/*
	*Function name: vKeypadInit
	*Parameters: None
	*Description: Function to initialize the keypad
	*Callee: DIO
	*/
	
	//input 0
	//output 0
	
	//set rows as o/p
	
	ROW0_DIR |= (1U<<ROW0);
	ROW1_DIR |= (1U<<ROW1);
	ROW2_DIR |= (1U<<ROW2);
	ROW3_DIR |= (1U<<ROW3);
	
	//set lines as i/p
	LINE0_DIR &= ~(1U<<LINE0);
	LINE1_DIR &= ~(1U<<LINE1);
	LINE2_DIR &= ~(1U<<LINE2);
	LINE3_DIR &= ~(1U<<LINE3);
	
	//set internal pullups on i/p
	LINE0_PULLUP |= (1U<<LINE0);
	LINE1_PULLUP |= (1U<<LINE1);
	LINE2_PULLUP |= (1U<<LINE2);
	LINE3_PULLUP |= (1U<<LINE3);
	
	//reset rows to no output 1
	ROW0_DATAOUT |= (NO_OUTPUT_STATE<<ROW0);
	ROW1_DATAOUT |= (NO_OUTPUT_STATE<<ROW1);
	ROW2_DATAOUT |= (NO_OUTPUT_STATE<<ROW2);
	ROW3_DATAOUT |= (NO_OUTPUT_STATE<<ROW3);
}
unsigned char ucKeypadScan(void)
{
	/*
	*Function name: vKeypadInit
	*Parameters: None
	*Description: Function to initialize the keypad
	*Callee: DIO
	*/
		
	uint8_t row=0;
	uint8_t line=NO_VALID_INPUT;
	unsigned char result= NO_VALID_INPUT;
	
	//loop on rows
	for(row=0;row<4;row++)
	{
		//RESET PINS
		ROW0_DATAOUT |= (1U<<ROW0);
		ROW1_DATAOUT |= (1U<<ROW1);
		ROW1_DATAOUT |= (1U<<ROW2);
		ROW1_DATAOUT |= (1U<<ROW3);
		
		//set the numbered row to output state 0
		switch(row)
		{
			case 0:ROW0_DATAOUT &= ~(OUTPUT_STATE<<ROW0);break;
			case 1:ROW1_DATAOUT &= ~(OUTPUT_STATE<<ROW1);break;
			case 2:ROW2_DATAOUT &= ~(OUTPUT_STATE<<ROW2);break;
			case 3:ROW3_DATAOUT &= ~(OUTPUT_STATE<<ROW3);break;
			default:break;
		}
		//check inputs
		if((LINE0_DATAIN&(1U<<LINE0)) == INPUT_STATE)	{line = 0;}
		else if((LINE1_DATAIN&(1U<<LINE1)) == INPUT_STATE)	{line = 1;}
		else if((LINE2_DATAIN&(1U<<LINE2)) == INPUT_STATE)	{line = 2;}
		else if((LINE3_DATAIN&(1U<<LINE3)) == INPUT_STATE)	{line = 3;}
		else {; /*MISRA*/}
		
			//if there is a valid input
			if(line != NO_VALID_INPUT)
			{
				//wait until input is gone
				while(INPUT_IS_STILL_VALID == INPUT_STATE /*there is valid input*/);
				
				//return mapped key to this input
				result = g_Keypad_Mapping[row][line];
				break;
			}
	}
		return result;
}