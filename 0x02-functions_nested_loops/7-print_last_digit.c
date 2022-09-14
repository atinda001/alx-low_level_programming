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
	int n;

	n = x % 10;
	if (n < 0)
	       n = -n;
	_putchar(n + '0');
		return (n);
}
