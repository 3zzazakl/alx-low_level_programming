#include "lists.h"

/**
 * print_listint - printing all elements in list.
 * @h: Input struct.
 * Return: (count of the nodes)
 */
size_t print_listint(const listint_t *h)
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
