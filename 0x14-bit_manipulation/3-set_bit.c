#include "main.h"
/**
*set_bit - sets value of bit to 1 at given index
*@n: pointer 
*@index: integer showing position 
*Return: returns int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
		return (1);
}	
