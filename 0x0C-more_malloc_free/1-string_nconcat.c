#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: length of string.
 * Return: (Concatenated string).
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > len2)
		n = len2;

	output = malloc(len1 + n + 1);

	if (output == NULL)
		return (NULL);

	strcpy(output, s1);
	strncat(output, s2, n);
	output[len1 + n] = '\0';

	return (output);
}
