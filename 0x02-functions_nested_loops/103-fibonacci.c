#include <stdio.h>

/**
 * main - Printing the first 10 Fibonacci numbers.
 * Return: (total sum of first 10 numbers).
 */
int main(void)
{
	long n1 = 0, n2 = 1, sum = 0, nxt, total = 0;

	while (sum < 10)
	{
		nxt = n1 + n2;
		n1 = n2;
		n2 = nxt;

		total += nxt;
		sum++;
	}
	printf("%lu\n", total);
	return (0);
}
