#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 *
 * Description: numbers 0 to 14 print using _putchar
 */
void more_numbers(void)
{
	int c;

	for ( c = 0; c <= 14; c++)
	{
		int j = 1;
		for ( j =1; j <= 10; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
