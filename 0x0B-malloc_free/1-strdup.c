#include "main.h"
/*
 * _strdup - print pointer to duplicate of string
 *
 * @s: char
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *dup;
	size_t i, length;

	i = 0;
	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	dup = (char*)malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}
	return (dup);
}
