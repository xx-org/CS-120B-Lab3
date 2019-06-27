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
	DDRB = 0xFE; PORTB = 0x01;
	DDRD = 0x000; PORTD = 0xFFF;
    /* Insert your solution below */
    unsigned char tempB;
    unsigned short weight;
    while (1) {
		tempB = 0x00;
		weight = (PIND << 1) | (PINB & 0x01);
		if (weight >= 70) {
			tempB = 0x02;
		} else if (weight >= 5) {
			tempB = 0x04;
		} else {
			tempB = 0x00;
		}
		PORTB = tempB;
    }
    return 1;
}
