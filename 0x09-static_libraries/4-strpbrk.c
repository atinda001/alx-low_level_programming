#include "main.h"
/**
 * _strpbrk - find first occurrence of byte of accept in string
 *
 * @s: pointer to string
 * @accept: byte to find in string
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);
	return (i);
}
