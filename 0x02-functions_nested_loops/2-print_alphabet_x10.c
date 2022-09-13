#include "main.h"
/**
 * main - program entry point
 *
 * print_alphabet_x10(): - print alphabet 10 times
 *
 * Return: 0 is success 
 */
void print_alphabet_x10()
{
	int i = 0;
	char a;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
