/*
 * calculator.c
 *
 * Created: 29/3/2018 5:58:03 PM
 *  Author: adham
 */ 

#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
#include "keypad.h"
#include "LCD.h"
#include "queue.h"
#include "calculator.h"

void StartCalculator()
{
	vLCDInit(); //Initialize LCD driver
	vKeypadInit(); //Initialize Keypad driver
	
	char keypad_input=0; //Storage for keypad characters
	uint8_t index=0; //Current character index in the input buffer
	queue_t input_buffer; //Input buffer for keypad and LCD as a queue
	vQueueInit(&input_buffer); //Clear input buffer
	string_parser_output_t *parser_output = NULL; //Pointer to take the return of the string parser as a struct
	char string_parser_input[CALC_LCD_LENGTH]; //Array to store the input and send it to the string parser
	uint8_t string_parser_input_index=0; //Index of array
	
	while(1)
	{
		while(index<=CALC_LCD_LENGTH)
		{
			keypad_input = ucKeypadScan(); //Scan keypad for input
			if((keypad_input!=NO_VALID_INPUT) && (keypad_input!='C') && (keypad_input!='=')) //if there is a valid input start capturing it in the input buffer
			{
				if(x8QueueEmpty(&input_buffer) == TRUE)
				{
					//If the user inputs something after a result is displayed, return the cursor and clear the display
					vLCDClearDisplay();
				}
				vQueueInsert(&input_buffer, keypad_input); //Add typed characters to the input buffer
				vLCDSendCharacter(keypad_input); //Echo typed characters on the LCD
			}else if(keypad_input=='C')
			{
				//If the user pushes the Clear 'C' key, clear the input buffer, clear the display
				vLCDClearDisplay();
				vQueueInit(&input_buffer);
			}else if(keypad_input=='=')
			{	//If the user pushes the '=' key and the input buffer isn't empty, start calculating
 				if(x8QueueEmpty(&input_buffer)==0)
 				{
 					vLCDGotoXY(0,1); //Go to second line on the LCD to display the result
					 
					 /* For testing, just display written characters in the result
					 while(x8QueueEmpty(&input_buffer)==0)
					 {
						 vLCDSendCharacter(dataQueuePop(&input_buffer));
					 }
					 */
					 
					 while(x8QueueEmpty(&input_buffer)==FALSE)
					 {
						 string_parser_input[string_parser_input_index] = dataQueuePop(&input_buffer);
						 string_parser_input_index++;
					 }
 					
					/* For testing, display string parser string on LCD on '='
					vLCDSendString(string_parser_input); */
					 
					//Parse the input data and get the operands, operation, and errors in a struct
					vStringparserParse(string_parser_input, parser_output);
					
					/*
 					switch(parser_output->err)
 					{
 						case CALC_NO_ERR: //If the string parser returns no error, start calculating and display the result, then clean up for new input
 							//calculate
 							//convert
 							//display
							//clean up
							//vLCDSendString(itoa(parser_output->num1,lolo,10));
							//vLCDGotoXY(0,0);
 							break;
 						case CALC_SYNTAX_ERR: //Display syntax error if the string parser says so, and clean up for new input
 							vLCDSendString("Syntax Error");
 							vQueueInit(&input_buffer);
 							break;
 						case CALC_MATH_ERR: //Display math error if the string parser says so, and clean up for new input
 							vLCDSendString("Math Error");
							 vQueueInit(&input_buffer);
 							break;
 					}
					 */
 				}
			}
		}
	}
}