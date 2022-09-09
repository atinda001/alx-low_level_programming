#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Successful)
 */
int main (void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	return (0);
}
