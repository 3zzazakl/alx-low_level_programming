#include "main.h"
/**
 * 
*/
void print_diagsums(int *a, int size)
{
       int x, main = 0, second = 0;

       for (x = 0; x < size; x++)
       {
              main += a[x * size + x];
              second += a[x * size + (size - 1 - x)];
       }
       printf("%d%d\n", main, second);
}
