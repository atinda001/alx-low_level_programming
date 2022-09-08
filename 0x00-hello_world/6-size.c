#include<stdio.h>
/**
* main -beginning of the program 
*/
int main(void)
{
	int integerType;
	float floatType;
	long int longType;
	char charType;
	long long int longerInt;
	/*
	* print the values of the data types 
	*/
	printf("size of int: %ld \n", sizeof(integerType));
	printf("size of a float: %ld \n", sizeof(floatType));
	printf("size of a long int: %ld \n", sizeof(longType));
	printf("sie of a long long int: %ld \n", sizeof(longerInt));
	printf("size of a char: %ld \n", sizeof(charType));
	/* return -returns a value of 0 */
	return (0);
}

