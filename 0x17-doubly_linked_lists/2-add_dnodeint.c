#include "lists.h"
/**
 * add_dnodeint - add new node at start of d list
 * @head: pointer to the head
 * @n: value to insert
 * Return: address of new element, else NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		*head =  new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
