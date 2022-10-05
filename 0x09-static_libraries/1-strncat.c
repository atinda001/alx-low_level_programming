#include "main.h"
/**
 * _strncat - concatenatyes two strings
 *
 * @dest: returns concatenated strings
 * @src: part of the strings
 * @n: limit to include
 *
 * Return: cocateneted string with limit to n
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
