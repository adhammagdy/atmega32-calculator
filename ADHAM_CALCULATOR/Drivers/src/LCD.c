/*
 * LCD.c
 *
 * Created: 29/3/2018 9:24:11 AM
 *  Author: adham
 */ 

#include "LCD.h"
#define F_CPU CPU_CLK
#include <util/delay.h>

static void vLCDSendCommand(uint8_t command);
static void vLCDSend4bit(uint8_t nibble);

void vLCDInit(void)
{

	//Initialize DIO by settings pin directions to output
	LCD_RS_DDR |= (1<<LCD_RS);
	LCD_RW_DDR |= (1<<LCD_RW);
	LCD_E_DDR |= (1<<LCD_E);
	LCD_D4_DDR |= (1<<LCD_D4);
	LCD_D5_DDR |= (1<<LCD_D5);
	LCD_D6_DDR |= (1<<LCD_D6);
	LCD_D7_DDR |= (1<<LCD_D7);

	
	_delay_ms(100); //LCD power on delay
	
	//Resetting LCD Controller
	vLCDSend4bit(0x03);
	_delay_ms(10);
	vLCDSend4bit(0x03);
	_delay_ms(1);
	vLCDSend4bit(0x03);
	vLCDSend4bit(0x02);
	
	vLCDSendCommand(0x28); //Function Set: 4bit mode / 2 lines / normal font
	_delay_ms(1);
	vLCDSendCommand(0x0F); //Display on / cursor on / blink on
	_delay_ms(1);
	vLCDClearDisplay(); //Clear the display
	_delay_ms(2);
	vLCDSendCommand(0x06); //Entry mode: LTR / no shift
	_delay_ms(2);
}
static void vLCDSendCommand(uint8_t command)
{
	LCD_RW_REG &= ~(1<<LCD_RW); //Set write mode
	LCD_RS_REG &= ~(1<<LCD_RS); //Set instruction mode
	
	vLCDSend4bit(command>>4); //Write higher 4bits
	_delay_us(100);
	vLCDSend4bit(command); //Write lower 4bits
	
	LCD_E_REG &= ~(1<<LCD_E); //Clear enable
	_delay_ms(2);
	LCD_E_REG |= (1<<LCD_E); //Set enable
	
}
void vLCDSendCharacter(unsigned char character)
{
	LCD_RW_REG &= ~(1<<LCD_RW); //Set write mode
	LCD_RS_REG |= (1<<LCD_RS); //Set data mode
	
	vLCDSend4bit(character>>4); //Write higher 4bits
	vLCDSend4bit(character); //Write lower 4bits
	
	LCD_E_REG &= ~(1<<LCD_E); //Clear enable
	_delay_ms(2);
	LCD_E_REG |= (1<<LCD_E); //Set enable
}
void vLCDSendString(char *ptr)
{
	uint8_t i=0;
	for(i=0 ; ptr[i]!='\0' && i<=2U*LCD_LINE_LENGTH ; i++)
	{
		if(i==LCD_LINE_LENGTH)
		{
			vLCDGotoXY(0,1);
		}
		vLCDSendCharacter(ptr[i]);
	}
}
void vLCDGotoXY(uint8_t x,uint8_t y)
{
	if(0 == y)
	{
		if (x>=0 && x <=15)
		{
			vLCDSendCommand(0x80 + x);
		}
	}
	else if (1U == y)
	{
		if (x>=0 && x <=15)
		{
			vLCDSendCommand(0xC0 + x);
		}
	}
}
void vLCDClearDisplay(void)
{
	vLCDSendCommand(0x01); //Clear Display
}
static void vLCDSend4bit(uint8_t nibble) //Write 4bits of data to the higher nibble of the LCD using DIO
{
	((nibble&1U)==1U)? (LCD_D4_REG |= (1U<<LCD_D4)) : (LCD_D4_REG &= ~(1U<<LCD_D4));
	(((nibble>>1U)&1U)==1U)? (LCD_D5_REG |= (1U<<LCD_D5)) : (LCD_D5_REG &= ~(1U<<LCD_D5));
	(((nibble>>2U)&1U)==1U)? (LCD_D6_REG |= (1U<<LCD_D6)) : (LCD_D6_REG &= ~(1U<<LCD_D6));
	(((nibble>>3U)&1U)==1U)? (LCD_D7_REG |= (1U<<LCD_D7)) : (LCD_D7_REG &= ~(1U<<LCD_D7));
	
	LCD_E_REG |= (1U<<LCD_E); //Set enable bit
	_delay_ms(2);
	LCD_E_REG &= ~(1U<<LCD_E); //Clear enable bit
}
