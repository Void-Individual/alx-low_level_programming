#include "lists.h"

/**
 * list_len - return the no of elements in a linked list
 * @h: pointer to the linked list
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
