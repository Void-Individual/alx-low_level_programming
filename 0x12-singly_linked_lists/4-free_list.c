#include "lists.h"

/**
 * free_list - function to free a list
 * @head: address pointer to list
 * Return: empty
*/

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
