#include "main.h"

/**
 * _strdup - Printing a copied string.
 * @str: Input String
 * Return: (Copied String).
*/
char *_strdup(char *str)
{
	char *dump = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dump == NULL)
	{
		return (NULL);
	}

	strcpy(dump, str);

	return (dump);
}
