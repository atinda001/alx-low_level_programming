#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - print name as is
*@name: name of the person
*@f: function pointer
*@char: pointer to string
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	
	f(name);
}
