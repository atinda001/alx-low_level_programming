#include "main.h"
/**
 * main -
 *
 * Return: 
 */
void print_alphabet_x10()
{
	int i = 0;
	while (i <= 10)
	{
		char a;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
