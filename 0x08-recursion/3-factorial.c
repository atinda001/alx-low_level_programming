#include "main.h"
/**
 * factorial - factorial of numbers
 *
 * @n: number to find factorial
 * Return: solution of factorial
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
