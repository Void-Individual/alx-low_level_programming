#include "lists.h"

/**
 * free_dlistint - function to free all elements in a list
 * @head: pointer to the list header
 * Return: Empty
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
