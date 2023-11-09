#include "lists.h"

/**
 * print_dlistint - getting node data
 * @h: input node
 * Return: (number of elements)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
