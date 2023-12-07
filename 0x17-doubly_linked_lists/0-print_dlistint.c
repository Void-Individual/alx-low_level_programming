#include "lists.h"
/**
 * print_dlistint - function to print d list elements
 * @h: pointer to header
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = (dlistint_t *) h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
