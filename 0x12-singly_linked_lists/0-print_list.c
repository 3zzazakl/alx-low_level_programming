#include "lists.h"
/**
 * print_list - printing all elements of a structure list.
 * @h: input structure.
 * Return: (Number of Nodes).
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		length++;
	}
	return (length);
}
