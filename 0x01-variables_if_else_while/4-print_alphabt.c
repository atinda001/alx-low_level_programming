#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');
		return (0);
}
