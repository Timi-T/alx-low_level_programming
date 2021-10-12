#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function to insert node at an index
 *
 * @head: pointer to pointer to first node of list
 * @idx: index to insert node at
 * @n: value of node to be inserted
 *
 * Return: pointer to the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *h = *head, *temp;

	if (*head == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(int) + sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		temp = h;
		h = new_node;
		new_node->n = n;
		new_node->next = temp;
		*head = new_node;
	}
	while (h != NULL)
	{
		if (count == idx - 1 && h->next != NULL)
		{
			temp = h->next;
			h->next = new_node;
			new_node->n = n;
			new_node->next = temp;
			break;
		}
		count++;
		h = h->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	return (*head);
}
