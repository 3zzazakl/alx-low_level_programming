#include "main.h"

/**
 * largest - prints the largest prime factor of the number.
 * @n: Input number.
 * Return: (Largest Number).
*/
long largest(long n)
{
	long i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			while (n % i == 0)
				n /= i;
		}
		else
			i++;
	}
	if (n > 1)
		return (n);
	else
		return (n);
}

/**
 * main - prints the largest prime factor of the number 612852475143.
 * Return: (Success) 0.
*/
int main(void)
{
	long n = 1231952;

	printf("%ld\n", largest(n));

	return (0);
}
