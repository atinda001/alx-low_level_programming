#include "main.h"
/**
 * print_rev - prints in reverse
 *
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int count = 0;


	while (s[count])
		count++;

	while (count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
