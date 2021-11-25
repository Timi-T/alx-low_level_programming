#include "lists.h"

/**
 * sum_listint - function to sum all integers in a linked list
 *
 * @head: list to be summed
 *
 * Return: the sum of all integers in a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		sum += temp->n;
	}
	return (sum);
}
