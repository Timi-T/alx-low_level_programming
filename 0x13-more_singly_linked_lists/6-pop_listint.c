#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the first node of a list
 *
 * @head: list provided
 *
 * Return: the value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1 = *head;
	int val;

	if (*head == NULL)
	{
		return (0);
	}
	val = temp1->n;
	*head = temp1->next;
	free(temp1);
	return (val);
}
