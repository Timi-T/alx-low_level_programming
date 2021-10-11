#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function to print a linked list
 *
 * @h: pointer to the address of the first element of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *first = h;

	while (first != NULL)
	{
		printf("%d\n", first->n);
		first = first->next;
		count++;
	}
	return (count);
}
