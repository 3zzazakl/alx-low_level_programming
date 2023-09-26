#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node at sepcific node.
 * @head: Input list.
 * @idx: index of new node.
 * @n: data
 * Return: (new node element.)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}

		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
