#include <stdio.h>
/**
 * main- program entry point
 *
 * Return: 0 on Success. Error code otherwise
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
