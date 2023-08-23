#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: Input Array.
 * @n: Length of array.
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == n - 1)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d", a[x]);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
