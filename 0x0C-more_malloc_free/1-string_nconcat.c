#include "main.h"
/**
*string_nconcat - concatenate s1 and s2 upto n 
*@s1: first string
*@s2: second string
*n: number of bytes for s2
*Return: string 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int i;
	unsigned int s2_len;

        s2_len = strlen(s2);

        for (i = 0; i < n && s1[i] != 0; i++)
        {
                s2[s2_len + i] = s1[i];
        }

        s2[s2_len + i] = '\0';

        return (s2);
}  
