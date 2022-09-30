#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);

	}
	if (!isdigit(argv[i]))
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
