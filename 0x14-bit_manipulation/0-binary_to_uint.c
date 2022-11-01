#include "main.h"

/**
*binary_to_uint - converts binary to unsigned int
*@b: pointer to input characters
*Return: decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	int decimal = 0;

	if (!b)
		return (0);
	for(i = 0; b[i]; i++)
	{

		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	} 
	return (decimal);
}
