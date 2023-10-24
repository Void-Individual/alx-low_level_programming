#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a list
 * @head: pointer to the addresss of list
 * @n: value of data
 * Return: address of new node, else NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	temp->next = node;
	}

	return (node);
}
