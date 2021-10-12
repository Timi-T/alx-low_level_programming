#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function to insert node at an index
 *
 * @head: pointer to pointer to first node of list
 * @index: index to delete node at
 *
 * Return: pointer to the list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	while (*head != NULL)
	{
		if (count == index)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
			return (1);
		}
		count++;
		*head = temp->next;
	}
	return (-1);
}
