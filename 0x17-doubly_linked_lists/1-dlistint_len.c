#include "lists.h"

/**
 * dlistint_len - getting no. node elements
 * @h: input node
 * Return: (No of elements in the node)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
