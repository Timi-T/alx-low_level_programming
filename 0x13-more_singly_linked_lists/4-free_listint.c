#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free a list
 *
 * @head: pointer to first node of list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
