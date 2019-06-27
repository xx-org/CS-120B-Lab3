/*	Author: xwang296
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
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    unsigned char tempB;
    unsigned char tempC;
    while (1) {
		tempB = (PINA & 0xF0) >> 4;
		tempC = (PINA & 0x0F) << 4;
		PORTB = tempB;
		PORTC = tempC;
    }
    return 1;
}
