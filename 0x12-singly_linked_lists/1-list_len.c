#include "lists.h"
#include <stdio.h>

/**
 * list_len - return size of a list_t
 * @h: the struct, head node
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
