#include "lists.h"

/**
 * listint_len - number of elements in a linked list are returned.
 * @h: type listint_t of linked list to be traversed.
 *
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
