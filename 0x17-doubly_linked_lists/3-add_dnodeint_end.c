#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint_end - function to add a node at the end of a list
 *
 * @head: pointer to head node of list
 * @n: value to be stored at node
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *head_copy = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n  = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (head_copy->next != NULL)
		{
			head_copy = head_copy->next;
		}
		head_copy->next = new_node;
		new_node->prev = head_copy;
		return (new_node);
	}
	return (NULL);
}
