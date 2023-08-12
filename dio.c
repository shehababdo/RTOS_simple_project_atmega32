/*
 * dio.c
 *
 * Created: 7/9/2023 5:26:20 PM
 *  Author: sheha
 */ 
#include "DIO.h"

void DIO_set_portDir(uint8 DIO_REG_en,uint8 DIO_Port_dir_en)
{
	switch (DIO_REG_en)
	{
	case PORT_A:
	{
		DDRA=DIO_Port_dir_en;
		break;
	}
	case PORT_B:
	{
		DDRB=DIO_Port_dir_en;
		break;
	}	
	case PORT_C:
	{
		DDRC=DIO_Port_dir_en;
		break;
	}
	case PORT_D:
	{
		DDRD=DIO_Port_dir_en;
		break;
	}
	default:
	break;
	}
}
void DIO_set_pinDir(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8 DIO_PIN_dir_en)
{
	switch (DIO_PIN_dir_en)
	{
	case DIO_PIN_OUTPUT:
	 {
		switch (DIO_REG_en)
		{
		case PORT_A:
		SET_BIT(DDRA,DIO_PIN_en);
			break;
			
		case PORT_B:
		SET_BIT(DDRB,DIO_PIN_en);
		break;	
		
		case PORT_C:
		SET_BIT(DDRC,DIO_PIN_en);
		break;
		
		case PORT_D:
		SET_BIT(DDRD,DIO_PIN_en);
		break;
		
		default:
		break;
		}
		break;
	 }
	case DIO_PIN_INPUT:
	{
		switch (DIO_REG_en)
		{
			case PORT_A:
			CLR_BIT(DDRA,DIO_PIN_en);
			break;
			
			case PORT_B:
			CLR_BIT(DDRB,DIO_PIN_en);
			break;
			
			case PORT_C:
			CLR_BIT(DDRC,DIO_PIN_en);
			break;
			
			case PORT_D:
			CLR_BIT(DDRD,DIO_PIN_en);
			break;
			
			default:
			break;
		}
		break;
	}	 
	default:
	break;
	}
}

void DIO_set_port_value(uint8 DIO_REG_en,uint8 DIO_Port_state_en)
{
	switch (DIO_REG_en)
	{
		case PORT_A:
		{
			PORTA=DIO_Port_state_en;
			break;
		}
		case PORT_B:
		{
			PORTB=DIO_Port_state_en;
			break;
		}
		case PORT_C:
		{
			PORTC=DIO_Port_state_en;
			break;
		}
		case PORT_D:
		{
			PORTD=DIO_Port_state_en;
			break;
		}
		default:
		break;
	}
}
void DIO_set_pin_value(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8 DIO_PIN_state_en)
{
	switch (DIO_PIN_state_en)
	{
		case DIO_PIN_HIGH:
		{
			switch (DIO_REG_en)
			{
				case PORT_A:
				SET_BIT(PORTA,DIO_PIN_en);
				break;
				
				case PORT_B:
				SET_BIT(PORTB,DIO_PIN_en);
				break;
				
				case PORT_C:
				SET_BIT(PORTC,DIO_PIN_en);
				break;
				
				case PORT_D:
				SET_BIT(PORTD,DIO_PIN_en);
				break;
				
				default:
				break;
			}
			break;
		}
		case DIO_PIN_LOW:
		{
			switch (DIO_REG_en)
			{
				case PORT_A:
				CLR_BIT(PORTA,DIO_PIN_en);
				break;
				
				case PORT_B:
				CLR_BIT(PORTB,DIO_PIN_en);
				break;
				
				case PORT_C:
				CLR_BIT(PORTC,DIO_PIN_en);
				break;
				
				case PORT_D:
				CLR_BIT(PORTD,DIO_PIN_en);
				break;
				
				default:
				break;
			}
			break;
		}
		default:
		break;
	}
}

void DIO_read_port(uint8 DIO_REG_en,uint8* val)
{
	switch (DIO_REG_en)
	{
		case PORT_A:
		{
			*val=PINA;
			break;
		}
		case PORT_B:
		{
			*val=PINB;
			break;
		}
		case PORT_C:
		{
			*val=PINC;
			break;
		}
		case PORT_D:
		{
			*val=PIND;
			break;
		}
		default:
		break;
	}
}
void DIO_read_pin(uint8 DIO_REG_en,uint8 DIO_PIN_en,uint8* val)
{
	switch (DIO_REG_en)
	{
		case PORT_A:
		{
			*val=GET_BIT(PINA,DIO_PIN_en);
			break;
		}
		case PORT_B:
		{
			*val=GET_BIT(PINB,DIO_PIN_en);
			break;
		}
		case PORT_C:
		{
			*val=GET_BIT(PINC,DIO_PIN_en);
			break;
		}
		case PORT_D:
		{
			*val=GET_BIT(PIND,DIO_PIN_en);
			break;
		}
		default:
		break;
	}
}

void DIO_SetPullUp(uint8 DIO_REG_en,uint8 DIO_PIN_en)
{
	switch (DIO_REG_en)
	{
		case PORT_A: 
		SET_BIT(PORTA,DIO_PIN_en);
		break;
		
		case PORT_B:
		SET_BIT(PORTB,DIO_PIN_en);
		break;
		
		case PORT_C:
		SET_BIT(PORTC,DIO_PIN_en);
		break;
		
		case PORT_D:
		SET_BIT(PORTD,DIO_PIN_en);
		break;
		
		default:
		break;
	}
}
void DIO_TOGGLE(uint8 DIO_REG_en,uint8 DIO_PIN_en)
{
	switch (DIO_REG_en)
	{
		case PORT_A:
		TOG_BIT(PORTA,DIO_PIN_en);
		break;
		
		case PORT_B:
		TOG_BIT(PORTB,DIO_PIN_en);
		break;
		
		case PORT_C:
		TOG_BIT(PORTC,DIO_PIN_en);
		break;
		
		case PORT_D:
		TOG_BIT(PORTD,DIO_PIN_en);
		break;
		
		default:
		break;
	}
}