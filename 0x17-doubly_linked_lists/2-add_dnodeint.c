#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function to add a node at the beginning of a linked list
 *
 * @head: head node of linked list
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *head_copy;
	dlistint_t *new_node;

	printf("entry point");
	if (head)
	{
		head_copy = *head;
		while(head_copy->prev != NULL)
		{
			head_copy = head_copy->prev;
		}
		new_node = malloc(sizeof(dlistint_t));
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = head_copy;
		head_copy->prev = new_node;
	}
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
	}
	return (new_node);
}
