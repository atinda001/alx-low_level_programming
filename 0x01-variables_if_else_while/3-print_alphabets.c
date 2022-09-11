#include <stdio.h>

/**
 * main- Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
