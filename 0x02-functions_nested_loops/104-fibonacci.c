#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * Return: (0) Success.
*/
int main(void)
{
	long n1 = 0, n2 = 1, sum = 0, nxt;

	while (sum < 89)
	{
		nxt = n1 + n2;

		if (sum == 88)
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
