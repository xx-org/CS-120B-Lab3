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
	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x01;
	unsigned char enabled = 0;
	unsigned short weight = 0;
	unsigned char disabled = 0;
    /* Insert your solution below */
    while (1) {
		weight = ((PIND <<1) + (PINB & 0x01));  
		printf("%d/n", weight);
		enabled = 0;
		disabled = 0;
		if(weight >= 70)
			enabled = 1;
		else if(weight > 5)
			disabled = 1;
		PORTB =  (enabled <<1) + (disabled <<2);
	
    }
    return 1;
}
