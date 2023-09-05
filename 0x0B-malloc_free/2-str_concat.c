#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: Input String 1.
 * @s2: Input String 2.
 * Return: (Concatenated String).
*/
char *str_concat(char *s1, char *s2)
{
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	output = malloc(strlen(s1) + strlen(s2) + 1);

	if (output == NULL)
	{
		return (NULL);
	}

	strcpy(output, s1);
	strcat(output, s2);

	return (output);
}
