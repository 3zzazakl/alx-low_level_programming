#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Name of the array.
 * @n: number of elements of the array.
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
