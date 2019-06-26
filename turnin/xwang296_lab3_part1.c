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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char result = 0x00;
	unsigned char i;
    /* Insert your solution below */
    while (1) {
		result = 0x00;
		for (i = 0; i < 8; i++) {
			result = result + ((PINA & (0x01 << i)) >> i);
			result = result + ((PINB & (0x01 << i)) >> i);
			//result = (PINA & (0x01 << i)) ? result++ : result;
			//result = (PINB & (0x01 << i)) ? result++ : result;
		}
		PORTC = result;
	}
    return 1;

}

