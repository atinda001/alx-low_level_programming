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
	int x, a;
	int z, b;

	for (x = 0; x <= 2; x++)
	{
		for (a = 0; a <= 3; a++)
		{
			_putchar(x);
			_putchar(a);
	_putchar(':');

	for (z = 0; z <= 5; z++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(z);
			_putchar(b);
		}
	}
		}
	}
}
