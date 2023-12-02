#include "hash_tables.h"

/**
 * hash_table_create - creating a hash table with a size.
 * @size: size of array.
 * Return: (pointer to the created hash table.)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;
	hash_node_t **item;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	item = malloc(sizeof(*item) * size);

	if (item == NULL)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		item[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = item;

	return (table);
}
