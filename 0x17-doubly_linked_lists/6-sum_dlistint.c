#include "lists.h"

/**
 * sum_dlistint - func to sum all data in list
 * @head: pointer to the head
 * Return: sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp, *curr = head;

	while (curr)
	{
		temp = curr->next;
		sum += (curr->n);
		curr = temp;
	}

	return (sum);
}
