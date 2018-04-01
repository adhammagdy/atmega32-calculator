/*
 * LCD.h
 *
 * Created: 29/3/2018 9:23:45 AM
 *  Author: adham
 */ 


#ifndef LCD_H_
#define LCD_H_
#include <stdint.h>
#include "LCDconfig.h"

//Function Prototypes
void vLCDInit(void);
void vLCDSendCharacter(unsigned char character);
void vLCDSendString(char *ptr);
void vLCDGotoXY(uint8_t x,uint8_t y);
void vLCDClearDisplay(void);


#endif /* LCD_H_ */
