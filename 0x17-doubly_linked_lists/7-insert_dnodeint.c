#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at position
 * @h: pointer to the header
 * @idx: index where new node should be
 * @n: value of new node
 * Return: address of new node, else NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *curr = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
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
			new->next = curr;
			curr->prev->next = new;
			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		count++;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
