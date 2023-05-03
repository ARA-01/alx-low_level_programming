#include "lists.h"

/**
 * get_nodeint_at_index - node  is returned at a certain index in linked list.
 * @head: first node in linked list.
 * @index: index of the node to be returned.
 *
 * Return: pointer to the node we're looking for or NULL if it fails.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}

	return (temp ? temp : NULL);
}
