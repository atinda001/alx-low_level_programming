#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @n: number of elements
 * @a: pointer to elements
 */
void reverse_array(int *a, int n)
{

	int len;
	const char temp, *begin, *end;

	len = *a;
	begin = *a;
	end = *a;

	for (n = 0; n < len -1; n++)
	{
		end++;
	}

	for (n = 0; n < len / 2; n++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	return;
}
