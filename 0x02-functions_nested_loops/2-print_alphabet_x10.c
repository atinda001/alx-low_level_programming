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
	char a;

	for (int i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
