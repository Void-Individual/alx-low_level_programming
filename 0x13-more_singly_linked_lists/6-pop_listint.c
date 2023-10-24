#include "lists.h"

/**
 * pop_listint - to delete head node of a list
 * @head: pointer to the list address
 * Return: data of deleted head, else 0 if head is null
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data = 0;

	if (*head == NULL)
		return (data);

	node = *head;
	data = node->n;
	*head = node->next;
	free(node);

	return (data);
}
