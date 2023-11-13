#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: Destination String.
 * @src: Source String.
 * @n: Number of characters to concat it.
 * Return: (The Final Concatation String)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';

	return (dest);
}
