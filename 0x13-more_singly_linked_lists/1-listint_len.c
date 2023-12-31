#include "lists.h"

/**
 * listint_len - function to ret no of elements in a list
 * @h: pointer to list pointer
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	if (h == NULL)
		return (count);

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
