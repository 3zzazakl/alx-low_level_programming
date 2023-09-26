#include "lists.h"

/**
 * sum_listint - getting sum of all the data (n) of a listint_t
 * @head: Input data list.
 * Return: (sum).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
