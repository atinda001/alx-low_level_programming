#include "main.h"
/**
 *print_sign - prints sign
 *
 *@n assigns sign
 *Return: 1 if n greater, 0 if equal and -1 if less 
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
