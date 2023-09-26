#include "lists.h"

/**
 * free_listint2 - free lists.
 * @head: input list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL && *head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
	}
}
