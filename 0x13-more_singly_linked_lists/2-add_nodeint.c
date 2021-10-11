#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add a node at the beginning of a list
 *
 * @head: pointer to a pointer to the list
 * @n: value to assign to the list
 *
 * Return: pointer to a the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(int) + sizeof(listint_t));
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);
}
