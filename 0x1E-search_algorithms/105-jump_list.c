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

/**
 * step = i
 * step_size = jump
 * node = prev
 * jump = current
*/
	size_t jump, i = 0;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);
	
	jump = sqrt(size);

	for (prev = current = list; current->index + 1 < size && current->n < value;)
	{
		prev = current;
		for (i += jump; current->index < i; current = current->next)
		{
			if (current->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, current->index);
	
	for(; prev->index < current->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
