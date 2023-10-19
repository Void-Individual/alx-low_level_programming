#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to address
 * @str: character to be duplicated
 * Return: address of the new element, else NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
