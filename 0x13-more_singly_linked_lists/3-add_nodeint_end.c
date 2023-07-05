#include "lists.h"

/**
 * add_nodeint_end - this function adds a node at the end
 * of a linked list (listint_t).
 * @head: this is a pointer to the 1st element in the list.
 * @n: data to be inserted in the new element.
 *
 * Return: the pointer to the new node (address), or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
