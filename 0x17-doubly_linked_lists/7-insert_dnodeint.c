#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at position
 * @h: pointer to the header
 * @idx: index where new node should be
 * @n: value of new node
 * Retun: address of new node, else NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *curr = *h, *new;

	while (curr)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				free(new);
				return (NULL);
			}
			new->n = n;
			new->prev = curr->prev;
			curr->prev->next = new;
			new->next = curr;
			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		count++;
	}

	return (NULL);
}
