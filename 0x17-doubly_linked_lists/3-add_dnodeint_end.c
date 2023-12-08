#include "lists.h"

/**
 * add_dnodeint_end - add a new node to list end
 * @head: pointer to list head
 * @n: nalue to be inserted
 * Return: address of new element, else NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	else
		*head = new;

	return (new);
}
