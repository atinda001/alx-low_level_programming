#include "main.h"
/**
 * puts2 - prints every character of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 5; i += 2)
	{
		puts(str);
		str += 2;

	}
}
