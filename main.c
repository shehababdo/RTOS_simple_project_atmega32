/*
 * RTOS_01.c
 *
 * Created: 8/11/2023 5:59:00 PM
 * Author : Shehab Abdo
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "FreeRTOS/FreeRTOS.h"
#include "FreeRTOS/task.h"
TaskHandle_t Task1_Init_handler=NULL;
TaskHandle_t Task2_LED0_TOG_handler=NULL;
TaskHandle_t Task3_LED1_TOG_handler=NULL;
void Task1_LED_Init(void *ptr_1)
{
	while (1)
	{
		DIO_set_pinDir(PORT_C,PIN_7,DIO_PIN_OUTPUT);
		DIO_set_pin_value(PORT_C,PIN_7,DIO_PIN_HIGH);
		
		DIO_set_pinDir(PORT_C,PIN_2,DIO_PIN_OUTPUT);
		DIO_set_pin_value(PORT_C,PIN_2,DIO_PIN_HIGH);
		
		vTaskSuspend(Task1_Init_handler);
	}
}

void Task2_LED0_TOG(void *ptr_2)
{
	while (1)
	{
		DIO_TOGGLE(PORT_C,PIN_7);
		vTaskDelay( 2000 );
	}
}

void Task3_LED1_TOG(void *ptr_3)
{
	while (1)
	{
		DIO_TOGGLE(PORT_C,PIN_2);
		vTaskDelay( 500 );
	}
}


int main(void)
{
	xTaskCreate(Task1_LED_Init,
	"Init",
	200,
	NULL,
	3,
	&Task1_Init_handler
	);
	
	xTaskCreate(Task2_LED0_TOG,
	"LED0_TOG",
	200,
	NULL,
	2,
	&Task2_LED0_TOG_handler
	);
	
	xTaskCreate(Task3_LED1_TOG,
	"LED1_TOG",
	200,
	NULL,
	1,
	&Task3_LED1_TOG_handler
	);
	
vTaskStartScheduler();
	
	while (1)
	{
	}
}

