#include "lists.h"
/**
 *  delete_dnodeint_at_index - delete node at index.
 * @index: input index of the node.
 * Return: (1) if success, otherwise (-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *tmp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (count < (index - 1) && current != NULL)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	tmp = current->next;
	current->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = current;
	}
	free(tmp);

	return (1);
}
