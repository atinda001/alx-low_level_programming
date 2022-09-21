#include "main.h"
/**
 * _strcmp - compare strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns results of comparison
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else if (s2  < s1)
	{
		return (15);
	}
	return (0);
}
