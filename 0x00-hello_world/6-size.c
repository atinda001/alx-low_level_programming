#include <stdio.h>

/**
 * main -Entry point
 *
 * Return:Always 0 (success)
 */

int main(void)
{
	int integerType;
	float floatType;
	long int longType;
	char charType;
	long long int longerInt;
	printf("size of char: %ld byte(s)\n", sizeof(charType));
	printf("size of a int: %ld byte(s)\n", sizeof(integerType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("sie of a long long int: %ld byte(s)\n", sizeof(longerInt));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}

