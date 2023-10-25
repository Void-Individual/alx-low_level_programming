#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: pointer to the address of the list
 * Return: pointer to the first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *body;

	if (head == NULL || (*head)->next == NULL)
		return (NULL);

	node = *head;
	body = node->next;

	body = reverse_listint(&body);

	node->next->next = node;
	node->next = NULL;

	*head = body;

	return (body);
}
