#include "function_pointers.h"

/**
 * print_name - printing a string.
 * @name: Input String.
 * @f: Input Function pointer.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
