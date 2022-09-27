#include "main.h"
/**
 * _memset - set memory location to set value
 *
 * @s: pointer to where to set
 * @b: value to be set
 * @n: number of bytes allocated
 * Return: sets b to s n times
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
