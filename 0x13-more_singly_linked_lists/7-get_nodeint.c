#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 * index
 * @head: pointer to the address of list
 * @index: index of node starting from 0
 * Return: data at index, else NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node;
	if (head == NULL)
		return (NULL);

	node = head;

	for (; count <= index; count++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);

	}

	return (node->n);
}
