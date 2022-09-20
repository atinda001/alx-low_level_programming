#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: string pointer
 */
void rev_string(char *s)
{
	int length, half;
	int i;
	char temp;


	for (length = 0; s[length] != '\0'; length++)
		;

		i = 0;
		half = length / 2;

	while (half--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
