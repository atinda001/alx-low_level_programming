#include "main.h"
#include <ctype.h>

/**
 *
 *
 *
 * Return:
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
