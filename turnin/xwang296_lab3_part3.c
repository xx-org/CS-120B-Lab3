/*	Author: Xichao Wang
 *  Partner(s) Name: Jia Xie
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char result;
    /* Insert your solution below */
    while (1) {
		result = 0x00;
		switch(PINA & 0x0F) {
			case 0: result = 0x40; break;
			case 1: 
			case 2: result = 0x60; break;
			case 3:
			case 4: result = 0x70; break;
			case 5:
			case 6: result = 0x38; break;
			case 7:
			case 8:
			case 9: result = 0x3C; break;
			case 10:
			case 11:
			case 12: result = 0x3E; break;
			case 13:
			case 14:
			case 15: result = 0x3F; break;
			default: result = 0x00; break;
		}
		if ((PINA & 0xF0) == 0x30)
			result = result | 0x80;
		
		PORTC = result;
	}
    return 1;

}

