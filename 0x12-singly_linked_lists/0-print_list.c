#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
*print_list - print all elements of a list list_t
*
*@h:pointer to what is stored in the node
*Return: returns printed elements
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}
	return (s);
}
