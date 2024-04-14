#include "search_algos.h"

/**
 * jump_list - Function that searches for a value in a sorted list of integers
 * @list: pointer to the head of the list
 * @size: is the number of nodes in the list
 * @value: is the value to be searche for
 * Return: a pointer to the first node with value, else NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, count, index = 0, prev, temp = 0;
	listint_t *current;

	if (!list || size < 1)
		return (NULL);

	step = sqrt(size);
	current = list;

	while (current)
	{
		count = 0;
		prev = index;
		while (count < step && current && current->next)
		{
			current = current->next;
			count++, index++;
		}
		printf("Value checked at index [%ld] = [%d]\n", index, current->n);

		if (value <= current->n || current->next == NULL)
		{
			current = list;
			while (temp < prev)
			{
				current = current->next;
				temp++;
			}
			printf("Value found between indexes [%ld] and [%ld]\n", prev, index);
			while(prev <= index)
			{
				printf("Value checked at index [%ld] = [%d]\n", prev, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
				prev++;
			}
			return (NULL);
		}
	}

	return (NULL);
}
