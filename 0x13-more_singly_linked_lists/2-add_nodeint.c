#include "lists.h"

/**
 * add_nodeint - to add node at the start of list
 * @head: pointer to the head address
 * @n: data value of list
 * Return: adress of node, else NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
