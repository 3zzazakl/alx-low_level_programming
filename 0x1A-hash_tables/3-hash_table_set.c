#include "hash_tables.h"
/**
 * hash_table_set -  add an element to hash.
 * @ht: pointer to hash table
 * @key: key
 * @value: value of new item.
 * Return: (the new node.)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *temp;
	char *new;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return (0);
	item = create_item(key, value);
	if (item == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];
	if (temp == NULL)
	{
		if (index >= ht->size)
		{
			free(item);
			return (0);
		}
		ht->array[index] = item;
		return (1);
	}
	else
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				new = strdup(value);
				free(ht->array[index]->value);
				ht->array[index]->value = new;
				return (1);
			}
			temp = temp->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
		return (1);
	}
}
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

