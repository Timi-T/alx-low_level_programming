#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *table;
        hash_node_t **array;

        array = malloc(size * sizeof(hash_node_t));
        table = malloc(sizeof(hash_table_t));
        table->size = size;
        table->array = array;
        return (table);
}
