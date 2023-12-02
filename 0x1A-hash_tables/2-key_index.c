#include "hash_tables.h"

/**
 * key_index - give index of key.
 * @key: key
 * @size: size
 * Return: (the index of key)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);

	index = hash_djb2(key) % size;

	return (index);
}
