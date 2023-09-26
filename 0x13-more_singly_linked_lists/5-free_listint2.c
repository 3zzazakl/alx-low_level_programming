#include "lists.h"

/**
 * free_listint2 - free lists.
 * @head: input list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
