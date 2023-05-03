#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list.
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h to be printed
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
