#include "hash_tables.h"
/**
 * create_item - Create a item object
 * @key: key
 * @value: value
 * Return: (the created node.)
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	if (strlen(key) == 0 || value == NULL || key == NULL)
		return (NULL);

	item->key = malloc(sizeof(char) * (strlen(key) + 1));

	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}

	item->value = malloc(sizeof(char) * (strlen(value) + 1));

	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}
