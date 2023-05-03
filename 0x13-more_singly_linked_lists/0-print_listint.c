#include "lists.h"

/**
 * print_listint - all the elements in the linked list are printed.
 * @h: the listint_t type of linked list to print.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
