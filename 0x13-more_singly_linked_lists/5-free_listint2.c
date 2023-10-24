#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to list head address
 * Return: empty
*/

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *temp;

	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
