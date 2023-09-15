#include "variadic_functions.h"

/**
 * sum_them_all - sum them all
 * @n: Number of args
 * Return: (sum).
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	else
	{
		for (i = 0; i < n; i++)
		{

			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
}
