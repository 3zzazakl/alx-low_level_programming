#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers using the
 * @list: pointer to the head of the list to search in
 * @size: number of elements in the list
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);
	jump = sqrt(size);
	for (current = list, i = 0; current != NULL;)
	{
		if (current->n >= value)
			break;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current;
		for (i = 0; current != NULL && i < jump; i++)
			current = current->next;
	}

	if (current == NULL)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	}

	while (prev != NULL && prev->index < size - 1 && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	if (prev != NULL && prev->n == value)
		return (prev);
	return (NULL);
}
