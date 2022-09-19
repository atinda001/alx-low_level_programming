#include "main.h"
/**
 * _strlen - length of string
 *
 * @s: pointer to the string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length + 1);
}

