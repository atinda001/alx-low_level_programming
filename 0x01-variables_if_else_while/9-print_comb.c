#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: 0 on success. otherwise error code
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
