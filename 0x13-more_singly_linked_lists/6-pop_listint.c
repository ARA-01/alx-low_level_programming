#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: this points to the 1st element in the listint_t linked list.
 *
 * Return: the data inside the elements that is removed,
 * or 0 if the listint_t linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
