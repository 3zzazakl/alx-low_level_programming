#include "lists.h"

/**
 * add_node -  adding a new node in the beginning.
 * @head: a pointer to a pointer to the head of the list
 * @str: the input string.
 * Return: (the address of the new element of NULL if failed).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	
	new_node = malloc(size_of(list_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
