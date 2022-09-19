#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	char *s2;
	char *s1;


	int len = strlen(str);

	int len1 = len / 2;
	int len2 = len - len1;


	s1 = malloc(len1 + 1);
	memcpy(s1, str, len1);
	s1[len1] = '\0';
	s2 = malloc(len2 + 1);
	memcpy(s2, str + len1, len2);
	s2[len2] = '\0';
	printf("%s\n", s2);
	free(s1);
	free(s2);
}
