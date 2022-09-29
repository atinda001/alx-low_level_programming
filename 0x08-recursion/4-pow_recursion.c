#include "main.h"
/**
 * _pow_recursion - find power of numbers
 *
 * @x: base number
 * @y: exponential
 * Return: power
 */
int _pow_recursion(int x, int y)
{


	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
