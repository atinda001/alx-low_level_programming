#include "main.h"
/**
 * main - include the program
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "my firs strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
