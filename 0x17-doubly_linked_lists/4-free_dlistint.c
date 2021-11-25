#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function to free a doubly linked list
 *
 * @head: pointer to head node of list
 * 
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
