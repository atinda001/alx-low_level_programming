#include <stdio.h>
#include  "main.h"
/**
 * main - run the program
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char s1[98] = "hello";
	char s2[] = "world\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
