#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: (Success) 0
*/
int main(void)
{
	int END = 1024;
	int sum = 0, x;

	for (x = 0; x < END; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
	}
	printf("Sum of natural numbers is: %d\n", sum);
	return (0);
}
