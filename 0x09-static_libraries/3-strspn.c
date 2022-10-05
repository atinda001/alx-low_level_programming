#include "main.h"
/**
 * _strspn - find length of prefix substring
 *
 * @s: pointer to the string
 * @accept: prefix substring
 * Return: nothing
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i;

	i = strspn(s, accept);
	return (i);
}
