#include "main.h"
/**
 * 
*/
void print_diagsums(int *a, int size)
{
       int x, y, value, main = 0, second = 0;

       for (x = 0; x < size; x++)
       {
              for(y = 0; y < size; y++)
              {
                     value = a[x * size + y];

                     if (x == y)
                     {
                            main += value;
                     }
              }
       }
       printf("%d%d\n", main, second);
}
