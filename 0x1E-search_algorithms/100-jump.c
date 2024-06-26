#include "search_algos.h"
/**
 * jump_search - searches for value in sorted array using Jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, prev, i;

	if (array == NULL)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	if (jump >= size)
		jump = size - 1;

	for (i = prev; i <= jump; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
