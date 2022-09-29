#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	char *start;
	char temp;
	char *end;
	size_t len;

	len = strlen(s);
	start = s;
	end = start + len - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;

	}

}
