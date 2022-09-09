#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: 0 is Success. Error code otherwise
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
