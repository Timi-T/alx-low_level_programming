nclude "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        unsigned long int index;
        unsigned long int key_hash;

        key_hash = hash_djb2(key);
        index = key_hash % size;
        return (index);
}
