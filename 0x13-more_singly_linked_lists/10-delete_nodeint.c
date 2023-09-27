#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list.
 * @head: input list.
 * @index: index of node list to be deleted
 * Return: ();
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	if (prev == NULL)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}
	free(current);
	return (1);
}
