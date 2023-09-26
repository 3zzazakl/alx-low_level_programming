#include "lists.h"

/**
 * free_listint - free the existing list
 * @head: input list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
