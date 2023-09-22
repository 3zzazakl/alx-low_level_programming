#include "lists.h"

/**
 * list_len - printing the length of elements in linked list.
 * @h: input linked List.
 * Return: (The number of elements)
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
