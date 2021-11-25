#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - self explanatory
 *
 * @head: pointer to head node of list
 * @index: index of node to get
 *
 * Return: pointer to nodes index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_copy = head;
	unsigned int count = 0;

	while (head_copy != NULL)
	{
		if (count == index)
		{
			return (head_copy);
		}
		count++;
		head_copy = head_copy->next;
	}
	return (NULL);
}
