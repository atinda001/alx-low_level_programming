#include <unistd.h>
#include "main.h"
/**
*_putchar - prints to the screen
*@c: character
*Return: output
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
