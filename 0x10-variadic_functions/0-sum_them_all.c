#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum them all
 * @n: Number of args
 * Return: (sum).
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i, sum = 0;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{

			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}

	if (n == 0)
	{
		return (0);
	}
}
