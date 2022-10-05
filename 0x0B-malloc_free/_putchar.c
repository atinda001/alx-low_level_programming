#include <unistd.h>
/**
 * _putchar - writes output to std output
 *@c: character to print
 *
 *
 *Return: o on success 
 -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
