#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - function to print a doubly linked list
 *
 * @h: pointer to head node of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *h_copy = h;
	size_t count = 0;

	while (h_copy->prev != NULL)
	{
		h_copy = h_copy->prev;
	}
	while (h_copy != NULL)
	{
		count++;
		h_copy = h_copy->next;
	}
	return (count);
}
