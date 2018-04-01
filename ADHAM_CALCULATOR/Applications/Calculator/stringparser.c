/*
 * stringparser.c
 *
 * Created: 29/3/2018 6:35:44 PM
 *  Author: adham
 */ 

#include "stringparser.h"
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include "queue.h"

uint8_t isOperator(char c);

void vStringparserParse(char *st, string_parser_output_t *output)
{
	//A function to take user input and parse it to get 2 integer operands and one math operation and report wrong format
	uint8_t length=0; //the length of the text
	uint8_t op_count=0;
	uint8_t i=0;
	char temp1[CALC_MAX_NUM_DIGITS];
	char temp2[CALC_MAX_NUM_DIGITS];
	uint8_t temp_index=0;
	uint8_t negative_flag=0;
	queue_t num1_queue;
	vQueueInit(&num1_queue);
	queue_t num2_queue;
	vQueueInit(&num2_queue);
	queue_t op_queue;
	vQueueInit(&op_queue);

	
	//Initialize
	output->num1 = 0;
	output->num2 = 0;
	output->op = 0;
	output->err = CALC_NO_ERR;

	//Determine the length of text
	while(st[length]!= '\0')
	{
		length++;
	}
	
	//Checking for syntax errors..
	if(st[0]=='*' || st[0]=='/' || isOperator(st[length-1])) //If the text begins with * or / or ends with an operator
		{
			output->err = CALC_SYNTAX_ERR; //Return error
			//break;
		}else
		{
			for(i=0;i<length;i++)
			{
				if(isOperator(st[i]) && isOperator(st[i+1]) && isOperator(st[i+2])) //If there are 3 consecutive operators
				{
					output->err = CALC_SYNTAX_ERR; //Return error
				}
			}
		}
	
	//If there are no syntax errors, start parsing
	if(output->err!=CALC_SYNTAX_ERR)
	{
		i=0;
		while(i<length)
		{
			if(isdigit(st[i])) //If found digit
			{
				if(op_count==0) //Before operator
				{
					vQueueInsert(&num1_queue, st[i]); //store digit in operand 1
				}else if(op_count==1) //After operator
				{
					vQueueInsert(&num2_queue, st[i]); //store digit in operand 2
				}else
				{
					output->err= CALC_OUT_OF_RANGE_ERR; //Return out of range error
				}
			}else if(isOperator(st[i])) //If found operator
			{
				if(isdigit(st[i+1])) //If found digit after operator
				{
					vQueueInsert(&op_queue, st[i]); //store operator in queue
					op_count++;
				} else //if found more operators
				{
					
				}
			}
		}
	}
}

uint8_t isOperator(char c)
{
	return (c=='+' || c=='-' || c=='*'|| c=='/' );
}
