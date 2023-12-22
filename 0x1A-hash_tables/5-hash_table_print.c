#include "hash_tables.h"

/**
 * hash_table_print - to print values inhash table
 * @ht: pointer to the hash table
 * Return: empty
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	int num = 0;
	hash_node_t *node;

	printf("{");
	if (ht != NULL)
	{
		for (; count < ht->size; count++)
		{
			if (ht->array[count] != NULL)
			{
				node = ht->array[count];
				while (node)
				{
					if (num != 0)
						printf(", ");
					num++;
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
				}
			}
		}
	}
	printf("}\n");
}
