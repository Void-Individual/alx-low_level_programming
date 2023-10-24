#include "lists.h"

/**
 * sum_listint - function to return sum of all data
 * in a linked list
 * @head: pointer to the address of head
 * Return: sum of dat, if the list is empty, 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (head == NULL)
		return (sum);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
