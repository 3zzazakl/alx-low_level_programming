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

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	i = bound < size - 1 ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, i);
	return (binary_search2(array, value, bound / 2, i));
}

/**
 * binary_search2 - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @start: starting index
 * @end: ending index
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search2(int *array, int value, size_t start, size_t end)
{
	size_t i;
	int mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

