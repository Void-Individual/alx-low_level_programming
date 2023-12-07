#include "lists.h"

/**
 * get_dnodeint_at_index - returns a specific n node
 * @head: pointer to the list heade
 * @index: index of the node starting from 0
 * Return: the nth node, else NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp, *curr = head;

	while (curr != NULL)
	{
		if (count == index)
			return (curr);
		temp = curr->next;
		curr = temp;
		count++;
	}

	return (NULL);
}
