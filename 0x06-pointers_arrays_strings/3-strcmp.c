#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: First String
 * @s2: Second String
 * Return: (number of compared characters).
*/
int _strcmp(char *s1, char *s2)
{
	int i, len, len1 = 0, len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	len = (len1 > len2) ? len1 : len2;

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			break;
		}
		else if (s1[i] == s2[i])
		{
			if (s1[i + 1] == '\0' && s2[i + 1] != '\0')
			{
				return (-32);
			}
			if (s1[i + 1] != '\0' && s2[i + 1] == '\0')
			{
				return (32);
			}
			if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			{
				return (0);
			}
			break;
		}
	}
}
