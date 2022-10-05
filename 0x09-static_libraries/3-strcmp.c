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
	int i, status;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			status = s1[i] - s2[i];
			break;
		}
		else
		{
			return (0);
		}
	}
	return (status);
}
