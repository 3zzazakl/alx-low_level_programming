#include "lists.h"

/**
 * listint_len - printing count of the elements
 * @h: Input struct.
 * Return: (Number of elements).
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
