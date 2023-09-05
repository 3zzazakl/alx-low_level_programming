#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: character.
 *
 * Return: (array of characters).
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
