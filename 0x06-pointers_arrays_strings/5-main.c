#include <stdio.h>
#include "main.h"
/**
 * main - include the program
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
