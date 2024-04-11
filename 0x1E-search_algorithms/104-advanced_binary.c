#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recur(array, 0, size - 1, value));
}
/**
 * advanced_binary_recur - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int advanced_binary_recur(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recur(array, left, i, value));
	return (advanced_binary_recur(array, i + 1, right, value));
}
