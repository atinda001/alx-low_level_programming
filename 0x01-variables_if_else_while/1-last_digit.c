#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/* more headers goes there */

/**
 * main- program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

/* betty style doc for function main goes there */

int main(void)

{

		int n, lastDigit;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */

				lastDigit = n % 10;

				if (lastDigit > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
				}
					else if (n == 0)
					{
						printf("Last digit of %d is %d and is 0\n", n, lastDigit);
					}
					else if (n < 6 && n != 0)
					{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
					}

					return (0);

}
