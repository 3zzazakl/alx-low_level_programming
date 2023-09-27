#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: input list.
 * Return: (count of nodes).
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
			break;

		current = next;
	}
	*h = NULL;

	return (count);
}
