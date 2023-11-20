#include "main.h"
/**
 * print_diagsums - print sums of two diagonals
 * @a: square matrix.
 * @size: size
*/
void print_diagsums(int *a, int size)
{
	int x, y, main = 0, second = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				main += a[(size + 1) * x];
			if ((x + y) == (size - 1))
				second += a[(size - 1) * (x + 1)];
		}
	}
	printf("%d, %d\n", main, second);
}
