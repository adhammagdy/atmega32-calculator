/*
 * keypadconfig.h
 *
 * Created: 28/3/2018 11:56:10 AM
 *  Author: adham
 */ 


#ifndef KEYPADCONFIG_H_
#define KEYPADCONFIG_H_

#include <avr/io.h>

#define ROW0 0
#define ROW0_DIR DDRC
#define ROW0_DATAOUT PORTC

#define ROW1 1
#define ROW1_DIR DDRC
#define ROW1_DATAOUT PORTC

#define ROW2 2
#define ROW2_DIR DDRC
#define ROW2_DATAOUT PORTC

#define ROW3 3
#define ROW3_DIR DDRC
#define ROW3_DATAOUT PORTC

#define LINE0 4
#define LINE0_DIR DDRC
#define LINE0_DATAIN PINC
#define LINE0_PULLUP PORTC

#define LINE1 5
#define LINE1_DIR DDRC
#define LINE1_DATAIN PINC
#define LINE1_PULLUP PORTC

#define LINE2 6
#define LINE2_DIR DDRC
#define LINE2_DATAIN PINC
#define LINE2_PULLUP PORTC

#define LINE3 7
#define LINE3_DIR DDRC
#define LINE3_DATAIN PINC
#define LINE3_PULLUP PORTC

#endif /* KEYPADCONFIG_H_ */