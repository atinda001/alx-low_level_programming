#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str
 * @str: string
 * Return: copy of string
 * the _strdup() function returns a pointer to the duplicated
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
	dup = (char *)malloc(sizeof(char) * (length + 1));
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
