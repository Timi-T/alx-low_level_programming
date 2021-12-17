#include "hash_tables.h"

/**
 * key_index - function to retrieve the index of a key
 *
 * @key: key to get index of
 * @size: size of hash table
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int key_hash;

	key_hash = hash_djb2(key);
	index = key_hash % size;
	return (index);
}
