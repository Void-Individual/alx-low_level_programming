#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: pointer to list address
 * @idx: index of the list where the new node should be
 * @n: value of data at index
 * Return: address of new node, else NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node = *head;
	listint_t *new_node;
	listint_t *next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	for (; count < idx - 1; count++)
	{
		if (node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		node = node->next;
	}

	next = node->next;
	node->next = new_node;
	new_node->next = next;

	return (new_node);
}
