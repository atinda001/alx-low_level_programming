#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 * main- Entry point
 * Return: Always 0 (Successful)
 *
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n<0)
				{
					puts("is negative\n");
					else
					{
						puts("is positive\n");

					return (0);

}
