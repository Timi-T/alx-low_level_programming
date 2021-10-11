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
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
