#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - self explanatory
 *
 * @head: pointer to head mode of list
 * @index: index to be deleted
 *
 * Return: 1 on success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_copy = *head;
	dlistint_t *previous_node, *next_node;
	unsigned int count = 0;

	if (head_copy == NULL)
		return (-1);
	if (index == 0)
	{
		previous_node = head_copy;
		head_copy = head_copy->next;
		*head = head_copy;
		free(previous_node);
		return (1);
	}
	while (head_copy != NULL)
	{
		if (count == index)
		{
			previous_node = head_copy->prev;
			next_node = head_copy->next;
			free(head_copy);
			previous_node->next = next_node;
			next_node->prev = previous_node;
			return (1);
		}
		count++;
		head_copy = head_copy->next;
	}
	return (-1);
}
