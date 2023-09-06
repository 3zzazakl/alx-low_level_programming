#include "main.h"

/**
 * _isdigit - checks is a digit or not.
 * @c: The input value.
 *
 * Return: (1) is number is digit, otherwise (0).
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
