#include "main.h"

/**
 * is_prime_number - check number of prime numbers.
 * @n: Input number.
 * Return: (1) is prime otherwise return (0).
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	else
		return (isPrime(n, n / 2));
}

/**
 * isPrime - Check if number is prime.
 * @n: input number.
 * @x: intermediate.
 * Return: (1) is prime otherwise return (0).
*/
int isPrime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else
	{
		if (n % 2 == 0)
			return (0);
		else
			return (isPrime(n, x - 1));
	}
}
