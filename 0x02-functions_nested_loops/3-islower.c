#include "main.h"
#include <ctype.h>
/**
 *_islower - islower
 *
 * checks if is lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else 
	{
		return(0);
	}
}
