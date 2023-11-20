#include "main.h"

/**
 * count_words - splits string into words
 * @str: input string
 * Return: (Pointer to array of string).
 */
int count_words(char *str)
{
	int i = 0, count = 0, length;

	length = strlen(str);
	while (i < length)
	{
		while (i < length && str[i] == ' ')
			i++;
		if (i < length && str[i] != ' ')
		{
			count++;
			while (i < length && str[i] != ' ')
				i++;
		}
	}
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: Input String.
 * Return: (Splitted words).
*/
char **strtow(char *str)
{
	int i = 0, j = 0, index = 0, length;
	char **words;

	length = strlen(str);
	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = malloc((count_words(str) + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	while (i < length)
	{
		while (i < length && str[i] == ' ')
			i++;
		if (i < length && str[i] != ' ')
		{
			j = i;
			while (i < length && str[i] != ' ')
				i++;
			words[index] = malloc((i - j + 1) * sizeof(char));
			if (words[index] == NULL)
				return (NULL);
			strncpy(words[index], &str[j], i - j);
			words[index][i - j] = '\0';
			index++;
		}
	}
	words[index] = NULL;
	return (words);
}

