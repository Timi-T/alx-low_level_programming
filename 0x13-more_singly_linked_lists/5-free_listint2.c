#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function to free a list
 *
 * @head: pointer to pointer to first node of list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
	{
		exit (0);
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}

