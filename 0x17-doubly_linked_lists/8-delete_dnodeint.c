#include "lists.h"

/**
 * delete_dnodeint_at_index - func to del a node
 * @head: pointer to list head
 * @index: index to be deleted
 * Return: 1 if success, else fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = *head;

	if (curr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (curr)
	{
		if (count == index)
		{
			if (curr->next == NULL)
			{
				curr->prev->next = NULL;
				free(curr);
				return (1);
			}
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
		curr = curr->next;
		count++;
	}
	return (-1);
}
