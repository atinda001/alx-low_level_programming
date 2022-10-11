#include "main.h"
/**
* malloc_checked - allocates memory using malloc function
*@b: unsigned int
*Return: if successful returns pointer
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = &b;
	ptr = malloc(sizeof *ptr);
	/*
	ptr = malloc(sizeof(char));
	ptr = malloc(sizeof(float));
	ptr = malloc(sizeof(double));
	*/
	if (ptr == NULL)
	{
		printf("98");
		return (NULL);
	}
	return (ptr);
}
