#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - self explanatory
 *
 * @h: pointer to head node of list
 * @idx: index to insert node at
 * @n: data of node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h_copy = *h;
	dlistint_t *new_node, *previous_node;
	unsigned int count = 0;

	while (h_copy != NULL)
	{
		if (count == idx)
		{
			previous_node = h_copy->prev;
			new_node = add_dnodeint(&h_copy, n);
			if (previous_node != NULL)
			{
				previous_node->next = new_node;
			}
			new_node->prev = previous_node;
			return (new_node);
		}
		count++;
		h_copy = h_copy->next;
	}
	return (NULL);
}
