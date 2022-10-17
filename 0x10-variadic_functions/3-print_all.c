#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - prints anything
*@format: list of types of arguments passed to the function
*Return: printed output
*/
void print_all(const char * const format, ...)
{
	va_list argz;
	char *check;

	char *sep = "";
	int i = 0;

	va_start(argz, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(argz, int));
			break;
			case 'i':
				printf("%s%d", sep, va_arg(argz, int));
			break;
			case 'f':
				printf("%s%f", sep, va_arg(argz, double));
			break;
			case 's':
				check = va_arg(argz, char*);
				if (check == NULL)
				{
					check = "(nil)";
				}
					else
					{
						printf("%s%s", sep, check);
					}
			break;
		}
		sep = ", ";
		i++;
	}
	va_end(argz);
	printf("\n");
}
