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
	int x, a = 0;
	int z, b = 0;

	while (x <= 2)
	{
		_putchar(x);
		x++;
	while (a <= 3)
	{
		_putchar(a);
		a++;
	_putchar(':');

	while (z <= 5)
	{
		_putchar(z);
		z++;
	}
	while (b <= 9)
		{
			_putchar(b);
			b++;
		}
	}
	}
}
