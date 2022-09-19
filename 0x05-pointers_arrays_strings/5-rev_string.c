#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: string pointer
 */
void rev_string(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
