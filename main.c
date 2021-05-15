#define F_CPU 8000000UL
#include <util/delay.h>

#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "TIMER_Interface.h"



int main()
{
	DIO_VidSetPinDirection(PORTB, PIN3, OUTPUT);

	TIMER0_VidInit();

	while(1)
	{
		Timer0_VidSetDutyCycle(85);
		_delay_ms(500);

		Timer0_VidSetDutyCycle(170);
		_delay_ms(500);

		Timer0_VidSetDutyCycle(255);
		_delay_ms(500);
	}

	return 0;
}
