#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * _putchar - prints char
 *
 * Return: void
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
