#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add node at the end of a list
 *
 * @head: pointer to pointer to first element of the list
 * @n: value of node
 *
 * Return: a pointer to the first element of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *pass;

	last = malloc(sizeof(int) + sizeof(listint_t));
	if (last == NULL)
	{
		free(last);
		return (0);
	}
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		pass = *head;
		while (pass->next != NULL)
		{
			pass = pass->next;
		}
		pass->next = last;
	}
	return (*head);
}
