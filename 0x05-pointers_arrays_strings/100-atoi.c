#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 * @s: Input String.
 *
 * Return: (THE Number Value)
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (isspace(*s))
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		sign = -1;
		s++;
	}

	while (isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
