/*
 * calculator.h
 *
 * Created: 29/3/2018 5:58:14 PM
 *  Author: adham
 */ 


#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <stdint.h>
#include <stdlib.h>
#include "keypad.h"
#include "LCD.h"
#include "stringparser.h"

#define CALC_LCD_LENGTH 16
#define TRUE 1
#define FALSE 0
void StartCalculator();
//operations
int16_t s16CalculatorAdd(int16_t a, int16_t b);
int16_t s16CalculatorSubtract(int16_t a, int16_t b);
int16_t s16CalculatorMultiply(int16_t a, int16_t b);
int16_t s16CalculatorDivide(int16_t a, int16_t b);
int16_t s16CalculatorCalculate(int16_t num1, int16_t num2, calc_operation);

#endif /* CALCULATOR_H_ */