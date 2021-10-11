#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_t - structure to hold a linked list
 *
 * @n: value of list
 * @next: address of next value
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
