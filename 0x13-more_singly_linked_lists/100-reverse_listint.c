#include "lists.h"

/**
 * reverse_listint - function to reverse a linked list
 *
 * @head: linked list to be reversed
 *
 * Return: pointer to a linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != 0)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev  = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
