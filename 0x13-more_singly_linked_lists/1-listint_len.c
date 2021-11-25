#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - function to print a linked list
 *
 * @h: pointer to the address of the first element of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *first = h;

	if (h == NULL)
	{
		return (0);
	}
	while (first != NULL)
	{
		count++;
		first = first->next;
	}
	return (count);
}

