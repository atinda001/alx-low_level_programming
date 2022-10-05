#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", (argc - 1));
	}
	else if (argv[0])
	{
		printf("0\n");
	}
	return (0);
}
