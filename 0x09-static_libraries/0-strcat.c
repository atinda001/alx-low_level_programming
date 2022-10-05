#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: where strings are appended
 * @src: first string
 *
 * Return: returns appended strings
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;
	size_t n = 1000000;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] =  src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
