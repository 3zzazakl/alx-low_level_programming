#include "main.h"

/**
 * _strdup - Printing a copied string.
 * @str: Input String
 * Return: (Copied String).
*/
char *_strdup(char *str)
{
	char *dump;

	if (str == NULL)
	{
		return (NULL);
	}

	dump = malloc(strlen(str) + 1);

	if (dump == NULL)
	{
		return (NULL);
	}

	strcpy(dump, str);

	return (dump);
}
