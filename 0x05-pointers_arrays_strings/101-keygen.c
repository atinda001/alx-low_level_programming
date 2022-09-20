#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random key words
 *
 * Return:Always 0
 */
int main(void)
{
	char pick;

	char comb[]
		= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int i, rand_num, sum = 2772;


	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		rand_num = rand() % (sizeof(comb) - 1);
		pick = comb[rand_num];
		putchar(pick);
		sum = sum - pick;
	}
	if (sum > 122)
	{
		putchar(sum / 2);
		putchar((sum / 2) + (sum % 2));
	}
	else
		putchar(sum);
	return (0);
}
