#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints strings
*@separator: string to be printed between strings
*@n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(ap, char *);
		if (!s)
			printf("%p", s);
		else
			printf("%s", s);
		if (separator && i < n)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
