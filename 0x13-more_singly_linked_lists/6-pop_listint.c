#include "lists.h"

/**
 * pop_listint - deleting a head of node.
 * @head: input list.
 * Return: (0) for empty list
 */
int pop_listint(listint_t **head)
{
	int next;
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	next = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (next);
}
