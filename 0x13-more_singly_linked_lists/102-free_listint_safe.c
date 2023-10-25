#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to address of list
 * Return: siz of the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node = *h;
	listint_t *temp;

	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
		count++;
	}

	*h = NULL;

	return (count);
}
