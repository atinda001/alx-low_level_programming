#include "main.h"

/**
 * print_last_digit - print_alphabet
 *
 * @x: int variable
 *
 * Return: last digit of x
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
