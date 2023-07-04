#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning
 * of a linked list (list_t).
 * @head: double points to the linked list.
 * @str: the new string to be added in the node.
 * Return: address of the new element or Null if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
