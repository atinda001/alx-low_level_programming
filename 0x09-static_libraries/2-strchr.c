#include "main.h"
#include <string.h>
/**
 * _strchr - find char in astring
 *
 * @s: pointer to the string
 * @c: character to find
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != c)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);

}
