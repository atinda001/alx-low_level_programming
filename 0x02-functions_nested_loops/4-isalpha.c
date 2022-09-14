#include "main.h"
#include <ctype.h>

/**
 *_isalpha - check for alphabets
 *
 *@c: int to be checked
 *
 * Return: 1 if alphabet otherwise 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return ('0');
	}
}
