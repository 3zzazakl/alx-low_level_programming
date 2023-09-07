#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of bytes to allocate.
 * @size: size of memory
 * Return: (address).
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, (nmemb * size));

	return (ptr);
}
