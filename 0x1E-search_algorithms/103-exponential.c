#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, i;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	i = bound / 2;
	if (bound >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i, size - 1);
		bound = size;
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n", i, bound);
	return (binary_search(array + i, bound - i, value) + i);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}

