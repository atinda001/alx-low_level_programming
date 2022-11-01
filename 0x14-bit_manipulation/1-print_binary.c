#include "main.h"
/**
*print_binary- prints binary from decimal number
*@n: unsigned long integer
*/
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	_putchar('0');

}
