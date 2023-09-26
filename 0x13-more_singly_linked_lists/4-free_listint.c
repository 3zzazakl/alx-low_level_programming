#include "lists.h"

/**
 * free_listint - free the existing list
 * @head: input list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(next);
		current = next;
	}
}
