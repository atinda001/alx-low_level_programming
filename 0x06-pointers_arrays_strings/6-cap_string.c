#include "main.h"
/**
 * cap_string -capitalize first word
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j, length;


	int sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	len = strlen(s);

	for (i = 0; i <  len && s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
