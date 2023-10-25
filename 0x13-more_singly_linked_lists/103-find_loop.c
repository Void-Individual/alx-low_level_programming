#include "lists.h"

/**
 * find_listint_loop - function to find list in loop
 * @head: pointer to the address of list
 * Return: address of node loop, else NULL if no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	node = head;
	temp = head;

	while (node != NULL && node->next != NULL)
	{
		node = node->next->next;
		temp = temp->next;

		if (temp == node)
		{
			temp = head;
			while (temp != node)
			{
				temp = temp->next;
				node = node->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
