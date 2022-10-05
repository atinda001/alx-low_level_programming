#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initialize it
 *
 * @size: size allocated
 * @c: character
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	size_t i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (0);
	}

	while (i <= size + 1)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
