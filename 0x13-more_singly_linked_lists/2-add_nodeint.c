#include "lists.h"

/**
 * add_nodeint - a new node is added at the beginning of linked list.
 * @head: points to the first node in linked list.
 * @n: data of the new node.
 *
 * Return: NULL if it fails or pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
