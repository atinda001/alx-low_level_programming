#include "main.h"
/**
 * is_prime_number - check if is prime number
 *
 * @n: number to check
 */
int is_prime_number(int n)
{
	int i = 2;
	
	if (n == 1 || n == 0)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
		i++;
		}
	return (is_prime_number(n));
}
