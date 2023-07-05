#include "lists.h"

/**
 * add_nodeint - the function adds a new node
 * at the beginning of a linked list (listint_t).
 * @head: points to the 1st node in the list.
 * @n: data to be inserted into the new node.
 * Return: pointer to the new node (address), or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
