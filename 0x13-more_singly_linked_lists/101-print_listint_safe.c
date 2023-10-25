#include "lists.h"

/**
 * print_listint_safe - function to print list
 * @head: pointer to address of list
 * Return: number of nodes, else exit 98
*/

size_t print_listint_safe(const listint_t **head)
{
	size_t count = 0;
	const listint_t *node = *head;
	const listint_t *temp;

	while (node != NULL)
	{
		printf("[%p] %d\n", node, node->n);
		count++;

		temp = node;
		node = node->next;

		if (temp <= node)
			exit(98);
	}
	return (count);
}
