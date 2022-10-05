#include "main.h"
/**
 * _memcpy - copies memory from one location to another
 *
 * @dest: destination to copy
 * @src: source to copy from
 * @n: limit of number of bytes to copy
 * Return: nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
		return (dest);
}
