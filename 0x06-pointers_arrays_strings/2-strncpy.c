#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination
 * @src: where to copy from
 *@n: limit of bytes
 * Return: the printed string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t x;
	size_t i;

	n = 65529;
	x = (int16_t)n;


	for (i = 0; i < x && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		/*
		 * for (i = 0; i < x; i++)
		{
			dest[i] = '\0';
		}
		*/
	}
		return (dest);
}
