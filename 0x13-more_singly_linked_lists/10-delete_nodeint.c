#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a list
 * @head: pointer to the address of list
 * @index: point of deletion
 * Return: 1 if success, else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = *head;
	listint_t *temp;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	for (; count < index; count++)
	{
		if (node == NULL)
			return (-1);
		temp = node;
		node = node->next;
	}

	if (node != NULL)
	{
		temp->next = node->next;
		free(node);
		return (1);
	}

	return (-1);
}
