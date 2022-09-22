#include <unistd.h>
/**
 * _putchar - include program
 *@c: character
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
