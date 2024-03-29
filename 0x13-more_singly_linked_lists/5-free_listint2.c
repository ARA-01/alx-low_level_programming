#include "lists.h"

/**
 * free_listint2 - function that frees a linked (listint_t) list.
 * @head: this  points to the linked (istint_t) list to free.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
