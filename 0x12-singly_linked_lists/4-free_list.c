#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free a linked list
 * @head: pointer to a list to be freed
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
