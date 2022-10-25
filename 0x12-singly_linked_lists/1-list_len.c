#include "lists.h"
#include <stdio.h>
/**
*list_len - returns number of elements in alinked list
*@h: pointer to the elements in the list
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
