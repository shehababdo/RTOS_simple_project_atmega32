/*
 * DIO.h
 *
 * Created: 7/9/2023 5:26:11 PM
 *  Author: sheha
 */ 

#ifndef DIO_H_
#define DIO_H_

#include "Atmega32_Reg.h"
#include "bitmaths.h"

typedef enum 
{
	PORT_A,
	PORT_B,	
	PORT_C,
	PORT_D
}DIO_REG_en;

typedef enum 
{
	PIN_0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7
}DIO_PIN_en;

typedef enum
{
	DIO_PORT_INPUT=0x00,
	DIO_PORT_OUTPUT=0xFF
}DIO_Port_dir_en;

typedef enum
{
	DIO_PORT_HIGH=0xFF,
	DIO_PORT_LOW=0x00
}DIO_Port_state_en;

typedef enum 
{
	DIO_PIN_INPUT,
	DIO_PIN_OUTPUT
}DIO_PIN_dir_en;

 typedef enum 
{
	DIO_PIN_LOW,
	DIO_PIN_HIGH
}DIO_PIN_state_en;

void DIO_set_portDir(uint8 DIO_REG_en,uint8 DIO_Port_dir_en);
void DIO_set_pinDir(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8 DIO_PIN_dir_en);

void DIO_set_port_value(uint8 DIO_REG_en,uint8 DIO_Port_state_en);
void DIO_set_pin_value(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8 DIO_PIN_state_en);

void DIO_read_port(uint8 DIO_REG_en,uint8* val);
void DIO_read_pin(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8* val);

void DIO_SetPullUp(uint8 DIO_REG_en,uint8 DIO_PIN_en);

void DIO_TOGGLE(uint8 DIO_REG_en,uint8 DIO_PIN_en);

#endif /* DIO_H_ */