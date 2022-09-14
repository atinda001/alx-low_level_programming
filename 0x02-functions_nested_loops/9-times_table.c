#include "main.h"
/**
 *times_table - print times table
 *
 * @i,j: table of 9
 *
 * Return: product table
 */

void times_table(void)
{
	int i, j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if (j == 0)
			{
				_putchar(mult + 'o');
			}
			if (mult < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
