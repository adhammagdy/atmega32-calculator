/*
 * LCDconfig.h
 *
 * Created: 29/3/2018 9:23:58 AM
 *  Author: adham
 */ 


#ifndef LCDCONFIG_H_
#define LCDCONFIG_H_

#include <avr/io.h>

//Pins
#define LCD_RS			1
#define LCD_RS_REG		PORTB
#define LCD_RS_DDR		DDRB
#define LCD_RW			2
#define LCD_RW_REG		PORTB
#define LCD_RW_DDR		DDRB
#define LCD_E			3
#define LCD_E_REG		PORTB
#define LCD_E_DDR		DDRB
#define LCD_D4			4
#define LCD_D4_REG		PORTA
#define LCD_D4_DDR		DDRA
#define LCD_D5			5
#define LCD_D5_REG		PORTA
#define LCD_D5_DDR		DDRA
#define LCD_D6			6
#define LCD_D6_REG		PORTA
#define LCD_D6_DDR		DDRA
#define LCD_D7			7
#define LCD_D7_REG		PORTA
#define LCD_D7_DDR		DDRA

//Options
#define CPU_CLK 12000000UL //Clock frequency of microcontroller
#define LCD_LINE_LENGTH 16U

#endif /* LCDCONFIG_H_ */
