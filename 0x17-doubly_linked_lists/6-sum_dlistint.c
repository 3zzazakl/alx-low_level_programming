#include "lists.h"
/**
 * sum_dlistint - getting sum of node data
 * @head: Input linked list.
 * Return: (sum)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
