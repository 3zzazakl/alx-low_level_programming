#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: Destination String.
 * @src: Source String.
 * @n: number of characters
 *
 * Return: (The copied String).
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
