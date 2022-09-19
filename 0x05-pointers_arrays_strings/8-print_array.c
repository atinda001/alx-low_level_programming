#include "main.h"
/**
 * print_array - prints element sof an arrray
 *
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

	}
	printf("\n");
}
