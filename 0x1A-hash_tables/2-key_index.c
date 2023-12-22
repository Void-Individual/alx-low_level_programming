#include "hash_tables.h"

/**
 * key_index - is to extract the index of a key
 * @key: key of the value
 * @size: size limit of the hashtable
 * Return: the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
