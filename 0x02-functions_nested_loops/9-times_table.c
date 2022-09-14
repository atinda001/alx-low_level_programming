#include "main.h"
/**
 *times_table - print times table
 *
 * @i,j: table of 9
 *
 * Return: product table
 */

void times_table()
{
	int i, j;
	int product;

	product = i * j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
		_putchar(product);
		}
	}
}
