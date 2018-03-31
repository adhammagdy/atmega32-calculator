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

void vStringparserParse(char *strng, string_parser_output_t *output)
{
	//A function to take user input and parse it to get 2 integer operands and one math operation and report wrong format
//	uint8_t string_length=0; //the length of the text
// 	uint8_t op_count=0;
// 	uint8_t string_index=0;
// 	char temp1[CALC_MAX_NUM_DIGITS];
// 	char temp2[CALC_MAX_NUM_DIGITS];
// 	uint8_t temp_index=0;
	
	//Initialize
	output->num1 = 0;
	output->num2 = 0;
	output->op = 0;
	output->err = CALC_NO_ERR;

// 	//Determine the length of text
// 	while(strng[string_length]!= '\0')
// 	{
// 		string_length++;
// 	}
	
	
	
	
	
// 	Errors
// 		if(strng[0]=='*' || strng[0]=='/' || strng[string_length-1]=='+' || strng[string_length-1]=='-' || strng[string_length-1]=='*' || strng[string_length-1]=='/')
// 		{
// 			output->err = CALC_SYNTAX_ERR;
// 		}else{
// 			//Test string
// 			while(string_index<string_length)
// 			{
// 				if( isdigit(strng[string_index]) )
// 				{
// 					if(op_count==0){
// 						temp1[temp_index] = strng[string_index];
// 						temp_index++;
// 					}else if(op_count==1)
// 					{
// 						temp2[temp_index] = strng[string_index];
// 						temp_index++;
// 					}else
// 					{
// 						output->err = CALC_SYNTAX_ERR;
// 						temp1[0]='\0';
// 						temp2[0]='\0';
// 					}
// 					
// 				}else if( strng[string_index] == '+')
// 				{
// 					op_count++;
// 					output->op= ADD;
// 				}else if( strng[string_index] == '-')
// 				{
// 					op_count++;
// 					output->op= SUB;
// 				}else if( strng[string_index] == '*')
// 				{
// 					op_count++;
// 					output->op= MUL;
// 				}else if( strng[string_index] == '/')
// 				{
// 					op_count++;
// 					output->op= DIV;
// 				}
// 			}
// 			output->num1 = atoi(temp1);
// 			output->num2 = atoi(temp2);
// 		}
	
}
