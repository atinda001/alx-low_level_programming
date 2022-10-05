#include "main.h"
#include <ctype.h>
/**
 *_islower - islower
 *
 * @c: is lowercase
 *
 * Return: 1 if c is lowewrcase otherwise 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
