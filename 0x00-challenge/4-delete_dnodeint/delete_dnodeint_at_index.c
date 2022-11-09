#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific point
 * @head: pointer to 1st element of a list
 * @index: index nodde to delete
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}
	saved_head = *head;
	p = 0;
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}
	if (p != index)
	{
		*head = saved_head;
		return (-1);
	}
	if (0 == index)
	{
		tmp = (*head)->next;
		free(*head)
			*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->prev = (*head)->prev;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = saved_head;
	}
	return (1);
}
