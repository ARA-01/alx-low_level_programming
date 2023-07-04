#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints all the number of elements in a linked list (list_t).
 * @h: points to the linked list (list_t).
 * Return: number of elements to be printed.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
			h = h->next;
	}
	return (i);
}
