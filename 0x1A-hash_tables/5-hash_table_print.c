#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 *
 * @ht: data structure containing a hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array;
	unsigned long int array_size;
	unsigned long int i = 0;
	int start = 0;
	char *key;
	char *value;

	printf("{");
	if (ht != NULL)
	{
		array_size = ht->size;
		array = ht->array;
		while (array_size != 1)
		{
			if (array[i] != NULL)
			{
				if (start == 1)
					printf(", ");
				while (array[i] != NULL)
				{
					key = array[i]->key;
					value = array[i]->value;
					printf("'%s': '%s'", key, value);
					array[i] = array[i]->next;
					start = 1;
				}
			}
			i++;
			array_size--;
		}
	}
	printf("}\n");
}
