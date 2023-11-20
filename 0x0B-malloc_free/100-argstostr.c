#include "main.h"

/**
 * argstostr - concatenates all args.
 * @ac: no. arguments.
 * @av: array.
 * Return: (new_string) or (NULL).
*/
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, index = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[index] = av[i][j];
			index++;
		}
		new_str[index] = '\n';
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
