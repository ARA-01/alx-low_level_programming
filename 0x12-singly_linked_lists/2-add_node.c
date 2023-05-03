#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node is added at the beginning of a linked list.
 * @head: double pointer to the list_t list.
 * @str: a new string to add in the node.
 *
 * Return: address of the new element or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
