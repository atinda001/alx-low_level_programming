#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints to 98
 *
 * @n: starting point of count
 *
 * Return: print count
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		printf("%d, ", x);
	}
}
