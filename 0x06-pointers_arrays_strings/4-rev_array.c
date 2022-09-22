#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @n: number of elements
 * @a: pointer to elements
 */
void reverse_array(int *a, int n)
{


	int tmp, start, end;


	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}

}
