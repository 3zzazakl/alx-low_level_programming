#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: Input String.
 * Return: (Capital String)
*/
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = toupper(str[0]);

	}

	while (str[i])
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		str[i] == ';'  || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
	{

		str[i + 1] = toupper(str[i + 1]);
	}
		i++;
	}
	return (str);
}
