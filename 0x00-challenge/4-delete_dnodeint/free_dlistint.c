#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to list first element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
