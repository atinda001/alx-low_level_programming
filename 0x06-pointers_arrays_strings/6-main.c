#include "main.h"
/**
 * main - include the program
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nh
		ello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
