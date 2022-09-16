#include <unistd.h>
/**
*_putchar - writes character c to std out
*
*@c:the character to write*
*Return: on succes 1
*on error, -1 is returned, and errno is  set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
