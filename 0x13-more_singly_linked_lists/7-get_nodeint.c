#include "lists.h"

/**
 * get_nodeint_at_index - function to get a node at an index
 *
 * @head: list to get node from
 * @index: index of list
 *
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_node = NULL;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			get_node = head;
			break;
		}
		head = head->next;
		count++;
	}
	if (get_node == NULL)
	{
		return (NULL);
	}
	return (get_node);
}
