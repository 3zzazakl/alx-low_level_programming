#include "lists.h"

/**
 * print_listint_safe - printing list
 * @head: input list
 * Return: (count of nodes).
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;


	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *) current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
