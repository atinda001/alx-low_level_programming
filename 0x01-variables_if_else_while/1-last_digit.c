#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main-Entry point
 *
 * Return:Always 0 (Successful)
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				int last_digit;

				last_digit = n % 10;

				while (n > 10)
				{
					n = n / 10;
				}

				printf("Last digit of %d ", n);
				printf("is %d ", last_digit);

				if (last_digit > 5)
				{
					printf("and is greater than 5 ");
				}
				else if (last_digit < 6 && last_digit != 0)
				{
					printf("and is less than 6 and not 0");
				}
				else if (last_digit == 0)
				{
					printf("and is 0");
				}

					return (0);

}
