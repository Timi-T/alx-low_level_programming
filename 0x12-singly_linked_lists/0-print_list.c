#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function to print out a list
 *
 * @h: pointer to the head of a list
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t elements = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		elements++;
	}
	return (elements);
}
