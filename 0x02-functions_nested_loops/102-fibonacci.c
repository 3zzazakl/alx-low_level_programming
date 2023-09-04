#include <stdio.h>

/**
 * main - Printing the first 50 Fibonacci numbers.
 * Return: (Success) 0
 */
int main(void)
{
	long n1 = 0, n2 = 1, sum = 0, nxt;

	while (sum < 50)
	{
		nxt = n1 + n2;

		if (sum == 49)
		{
			printf("%lu", nxt);

		}
		else
		{
			printf("%lu, ", nxt);

		}
		n1 = n2;
		n2 = nxt;
		sum++;
	}
	printf("\n");
	return (0);
}
