#include "main.h"
/**
 *_isupper - checks for upper case
 *@c: variable to be tested
 *Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
