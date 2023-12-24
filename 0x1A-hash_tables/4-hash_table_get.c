#include "hash_tables.h"

/**
 * hash_table_get - func to retrieve a value
 * @ht: pointer to the hash table
 * @key: key to the value
 * Return: the associated value, else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];

	return (node->value);
}
