#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap a and b
 * @a: value
 * @b: value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*b = &a;
	*a = &b;
}
