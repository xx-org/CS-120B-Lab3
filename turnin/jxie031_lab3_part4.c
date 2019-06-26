/*	Author: jxie031
 *  Partner(s) Name: Xichao Wang
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
	unsigned char A;
	unsigned char B = 0x00;
	unsigned char C = 0x00;
    /* Insert your solution below */
    while (1) {
		C = 0x00;
		B = 0x00;
		A = PINA;
		B = (A >> 4);
		C = (A << 4);
		PORTB = B;
		PORTC = C;
    }
    return 1;
}
