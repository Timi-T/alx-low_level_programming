#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve an element from the hash table
 *
 * @ht: hash table structure
 * @key: key of value to retrieve
 *
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **array = ht->array;
	unsigned long int array_size = ht->size;
	unsigned long int index;

	index = key_index((const unsigned char *)key, array_size);
	while (array[index] != NULL)
	{
		if (strcmp(key, array[index]->key) == 0)
		{
			return (array[index]->value);
		}
		array[index] = array[index]->next;
	}
	return (NULL);
}
