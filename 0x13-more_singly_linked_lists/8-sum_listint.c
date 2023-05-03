#include "lists.h"

/**
 * sum_listint - sum of all the data in listint_t list is calculated.
 * @head: the first node in linked list.
 *
 * Return: sum integer.
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
