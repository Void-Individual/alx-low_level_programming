#include "lists.h"
/**
 * dlistint_len - func to return no of elements in s list
 * @h: pointer to the header
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *curr = (dlistint_t *) h;

	while (curr)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
