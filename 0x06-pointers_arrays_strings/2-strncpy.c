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
	int i, lendest;

	lendest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < lendest)
		{
		dest[i] = src[i];
		}

	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
		return (dest);
}
