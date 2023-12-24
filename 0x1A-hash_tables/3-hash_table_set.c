#include "hash_tables.h"

/**
 * new_node - function to create a new hash node
 * @key: key of the value
 * @value: value to be stored
 * Return: address of the new node or null
*/

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - to add an element to the table
 * @ht: hashtable to be updated
 * @key: is the key, but cannot be an empty string
 * @value: is the keys actual value, to be duplicated
 * Return: 1 if success, else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int index;

	if (ht == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new = new_node(key, value);

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		ht->array[index] = new;
	}

	return (1);
}
