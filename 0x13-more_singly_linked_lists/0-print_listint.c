#include "lists.h"

/**
 * print_listint - function prints all the elements
 * of a linked list (listint_t).
 * @h: the  linked list of type listint_t to be printed.
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
