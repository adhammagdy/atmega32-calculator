/*
 * stringparser.h
 *
 * Created: 29/3/2018 6:36:10 PM
 *  Author: adham
 */ 


#ifndef STRINGPARSER_H_
#define STRINGPARSER_H_

#include <stdint.h>

//string parser
typedef enum {CALC_NO_ERR=0, CALC_SYNTAX_ERR, CALC_MATH_ERR, CALC_OUT_OF_RANGE_ERR}calc_error;
typedef enum {NONE=0, ADD, SUB, MUL, DIV}calc_operation;
#define CALC_MAX_NUM_DIGITS 3

typedef struct
{
	int16_t num1;
	int16_t num2;
	calc_operation op;
	calc_error err;
}string_parser_output_t;

void vStringparserParse(char *string, string_parser_output_t *output);

#endif /* STRINGPARSER_H_ */