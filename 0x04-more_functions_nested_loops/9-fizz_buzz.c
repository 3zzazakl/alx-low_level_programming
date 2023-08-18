#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * Return: (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz ");
			printf(" ");

		}
		else
		{
			printf("%d", x);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
