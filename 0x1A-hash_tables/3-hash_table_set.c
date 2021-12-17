#include <string.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int array_size;
        unsigned long int index;
        char *value_copy;
        char *key_copy;
        hash_node_t **array;

        value_copy = malloc((strlen(value)  + 1) * sizeof(char));
        key_copy = malloc((strlen(key)  + 1) * sizeof(char));
        strcpy(value_copy, value);
        strcpy(key_copy, key);
        array = ht->array;
        array_size = ht->size;
        index = key_index((const unsigned char *)key, array_size);
        add_node(array, index, key_copy, value_copy);
        return (1);
}

hash_node_t **add_node(hash_node_t **array, unsigned long int index, char const *key, char *value)
{
        hash_node_t *new_node;
        hash_node_t *temp;
        hash_node_t **array_copy = array;

        temp = array_copy[index];
        new_node = malloc(sizeof(hash_node_t));
        new_node->key = (char *)key;
        new_node->value = value;
        new_node->next = temp;
        array_copy[index] = new_node;
        return (array_copy);
}

void print_hash(hash_table_t *table)
{
        hash_node_t **array_copy = table->array;
        unsigned long int array_size = table->size;
        unsigned long int i = 0;
        int n = 1;

        while (array_size != 1)
        {
                if (array_copy[i] != NULL)
                {
                        printf("PRINTING SLOT %lu\n", i);
                        printf("========================\n");
                        n = 0;
                        while (array_copy[i] != NULL)
                        {
                                printf("key at node[%d]: %s\n", n, array_copy[i]->key);
                                printf("value at node[%d]: %s\n", n, array_copy[i]->value);
                                printf("-----------------\n");
                                array_copy[i] = array_copy[i]->next;
                                n++;
                        }
                        printf("\n");
                }
                i++;
                array_size--;
        }
}
