#include "main.h"

/**
 * _strstr - locating a substring.
 * @haystack: The string.
 * @needle: The required string.
 * Return: (string representation of the string)
*/
char *_strstr(char *haystack, char *needle)
{
	char *ptr = haystack;

	while (*haystack != '\0')
	{
		ptr = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}

		if (!*p)
		{
			return (ptr);
		}

		haystack = ptr + 1;
      }

	return NULL; 
}
