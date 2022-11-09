#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly luinked list of integers
 * @h: pointer to first list element
 * Return: number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
