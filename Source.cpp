#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>



sei();
EICRA = 0b00001111;
EIMSK = 0b00000111;
TIMSK1 = 1 << 0;
EIFR = 0b11111111;

ISR(INT0_vect)
{

}

ISR(TIMER1_OVF - vect)
{
	EIFR = 0b00000011;
	EIMSK = 0b00000111;
}