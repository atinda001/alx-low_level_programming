#include "main.h"
/**
 * _isdigit - checks if is digit
 *@c: number checked
 * Return: 1 if is digit else 0
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
