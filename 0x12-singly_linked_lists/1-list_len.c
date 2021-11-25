#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function to return length of elements in a list
 *
 * @h: pointer to the head of a list
 *
 * Return: number of elemets
 */

size_t list_len(const list_t *h)
{
	size_t elements = 1;
	const list_t *temp = h;

	if (h == NULL)
	{
		elements = 0;
		return (elements);
	}
	while (temp->next != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
