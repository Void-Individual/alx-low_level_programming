#include "hash_tables.h"

/**
 * hash_table_delete - func to free a hash table
 * @ht: pointer to the hash table
 * Return: empty
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *node, *temp;

	for (; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			node = ht->array[count];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
