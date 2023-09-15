#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: Separator between lines
 * @n: Number of elements.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int x;

    va_list args;

    va_start(args, n);

    if (separator == NULL)
    {
        separator = "";
    }
    for (x = 0; x < n; x++)
    {
        printf("%d", va_arg(args, int));
        if (x < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    return(args);
}
