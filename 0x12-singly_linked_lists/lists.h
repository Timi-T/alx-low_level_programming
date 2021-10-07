#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_t - structure to hold a node for a list
 *
 * @str: - string
 * @len: - length of string
 * @next: - address of next node
 *
 */

typedef struct list_t
{
	char *str;
	unsigned long int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);

#endif
