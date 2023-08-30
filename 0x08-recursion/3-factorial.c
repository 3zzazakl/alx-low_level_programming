#include "main.h"

/**
 * factorial -  Calculating factorial of a given number.
 * @n: Input number.
 * Return: (Result);
*/
int factorial(int n)
{
	if (n == 0)
	{
              return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
