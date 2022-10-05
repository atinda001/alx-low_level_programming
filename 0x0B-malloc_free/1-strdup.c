#include "main.h"
/*
 * _strdup - print pointer to duplicate of string
 *
 * @s: char
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *n;

	*n = (char *)malloc(sizeof(char));
	while (*str != '\0')
	{
		*n = strdup(*str);
	}
	return (*n);
}
