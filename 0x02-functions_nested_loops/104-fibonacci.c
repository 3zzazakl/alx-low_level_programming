#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * Return: (Success) 0.
*/

int main(void)
{
	unsigned int a = 1, b = 2, temp;
	int count;

	printf("%u, %u, ", a, b);

	for (count = 3; count <= 98; count++)
	{
		temp = a + b;

		printf("%u", temp);

		if (count < 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		a = b;
		b = temp;
	}

	return (0);
}
