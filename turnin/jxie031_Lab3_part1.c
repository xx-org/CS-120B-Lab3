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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char A;
	unsigned char B;
	unsigned char C = 0x00;
    unsigned char i;
    /* Insert your solution below */
    while (1) {
		C = 0x00;
		A = PINA;
		B = PINB;
		for(i = 0; i < 8; i++){
			if(A & (0x01<<i))
				C = C + 1;
			if(B & (0x01<<i))
				C = C + 1;
		}
		PORTC = C;
    }
    return 1;
}
