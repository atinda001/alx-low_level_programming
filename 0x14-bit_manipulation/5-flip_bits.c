#include "main.h"
/**
*flip_bits -number of bits needed to flip to get from one number
*@n: integer
*@m: long unsigned int
*Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excl >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
