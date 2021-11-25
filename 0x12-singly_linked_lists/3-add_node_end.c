#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - function to add a node to the top of a list
 *
 * @head: a a pointer to a pointer that points to the head of the list
 * @str: string to be addd to list
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;

	newnode = malloc(strlen(str) + sizeof(int) + sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (temp == NULL)
	{
		*head = newnode;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
