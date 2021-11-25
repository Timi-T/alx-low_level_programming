#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - function to add a node to the top of a list
 *
 * @head: a a pointer to a pointer that points to the head of the list
 * @str: string to be addd to list
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(strlen(str) + sizeof(int) + sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
