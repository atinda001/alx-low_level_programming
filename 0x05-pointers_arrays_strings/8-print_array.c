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

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d, ", a[i]);
		if (n > 0)
		{
			printf(" ");
		}
	}
	printf("\n");
}
