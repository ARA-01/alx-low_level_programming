#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data in a linked listint_t list.
 * @head: the 1st node in the linked listint_t list.
 *
 * Return: resulting sum or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
