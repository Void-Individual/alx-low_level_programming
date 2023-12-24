#include "hash_tables.h"

/**
 * shash_table_delete - func to free a hash table
 * @ht: pointer to the hash table
 * Return: empty
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node, *temp;

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

/**
 * shash_table_print_rev - to print values in hash table rev
 * @ht: pointer to the hash table
 * Return: empty
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	int num = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	count = ht->size;
	printf("{");
	for (; count != 0; count--)
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

	printf("}\n");
}

/**
 * shash_table_print - to print values inhash table
 * @ht: pointer to the hash table
 * Return: empty
*/

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	int num = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
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

	printf("}\n");
}

/**
 * shash_table_get - func to retrieve a value
 * @ht: pointer to the hash table
 * @key: key to the value
 * Return: the associated value, else NULL
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];

	return (node->value);
}

/**
 * shash_new_node - function to create a new hash node
 * @head: pointer to the head of the index
 * @key: key of the value
 * @value: value to be stored
 * Return: address of the new node or null
*/

shash_node_t *shash_new_node(shash_node_t **head, const char *key,
const char *value)
{
	shash_node_t *new, *temp = *head;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * shash_table_set - to add an element to the table
 * @ht: hashtable to be updated
 * @key: is the key, but cannot be an empty string
 * @value: is the keys actual value, to be duplicated
 * Return: 1 if success, else 0
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new = shash_new_node(&(ht->array[index]), key, value);

	if (new == NULL)
		return (0);
	return (1);
}

/**
 * shash_table_create - func to create a new hash table
 * @size: size of the array
 * Return: pointer to the new hashtable
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	shash_node_t **array;
	unsigned long int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
