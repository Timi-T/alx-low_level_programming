#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function to add a node at the beginning of a linked list
 *
 * @head: head node of linked list
 * @n: value to be stired at node
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
        if (*head == NULL)
        {
		new_node->prev = NULL;
		new_node->next = NULL;
                *head = new_node;
		return (new_node);
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
