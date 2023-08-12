/*
 * Atmega32_Reg.h
 *
 * Created: 7/9/2023 1:29:19 PM
 *  Author: sheha
 */ 


#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

#include "STD.h"
/****************************DIO *********************/
#define DDRA (*(volatile uint8*)(0x3A))
#define PORTA (*(volatile uint8*)(0x3B))
#define PINA (*(volatile uint8*)(0x39))

#define DDRB (*(volatile uint8*)(0x37))
#define PORTB (*(volatile uint8*)(0x38))
#define PINB (*(volatile uint8*)(0x36))

#define DDRC (*(volatile uint8*)(0x34))
#define PORTC (*(volatile uint8*)(0x35))
#define PINC (*(volatile uint8*)(0x33))

#define DDRD (*(volatile uint8*)(0x31))
#define PORTD (*(volatile uint8*)(0x32))
#define PIND (*(volatile uint8*)(0x30))
/****************************EXT INT *********************/
#define MCUCR (*(volatile uint8*)(0x55))
#define MCUCSR (*(volatile uint8*)(0x54))
#define GICR (*(volatile uint8*)(0x5B))
#define GIFR (*(volatile uint8*)(0x5A))
#define SREG (*(volatile uint8*)(0x5F))

#endif /* ATMEGA32_REG_H_ */