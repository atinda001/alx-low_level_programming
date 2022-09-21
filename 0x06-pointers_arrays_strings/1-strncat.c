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
	size_t dest_len = strlen(dest);
	size_t i;
	size_t x;

	x = (int16_t)n;


	for (i = 0; i < x && src[i] != 0; i++)
	{
		dest[dest_len + i] = src[i];

		dest[dest_len + i] = '\0';
	}
	return (dest);
}
