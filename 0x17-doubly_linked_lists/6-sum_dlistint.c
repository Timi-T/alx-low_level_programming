#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function to sum all data in a list
 *
 * @head: pointer to head node of lisr
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head_copy = head;
	int sum = 0;

	while (head_copy != NULL)
	{
		sum += head_copy->n;
		head_copy = head_copy->next;
	}
	return (sum);
}
