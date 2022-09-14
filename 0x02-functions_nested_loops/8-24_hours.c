#include "main.h"

/**
 * jack_bauer -print_hours
 *
 * @x,a: hours
 * @y,b:minutes
 *Return: all minutes of day
 */

void jack_bauer(void)
{
	int hour, min;

	for (min = 0; min < 59; min++)
	{ 
		if min > 59
			hour++;
		for(hour = 0; hour <= 23; hour++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(min);
		}
	}
}
			
