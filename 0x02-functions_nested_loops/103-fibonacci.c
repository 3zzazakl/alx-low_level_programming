#include <stdio.h>

/**
 * main - Printing sum of the even-valued terms.
 * Return: (Success) 0.
 */
int main(void)
{
	int n1 = 1, n2 = 2, sum = 0, nxt;

	while (n2 <= 4000000)
	{
		if (n2 % 2 == 0)
			sum += n2;

		nxt = n1 + n2;
		n1 = n2;
		n2 = nxt;
	}
	printf("%d\n", sum);
	return (0);
}
