#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - Printing result.
 * @s: Operation sign
 * Return: (result).
*/
int (*get_op_func(char *s))(int, int)
{
       int i;

       op_t ops[] = {
              {"+", op_add},
              {"-", op_sub},
              {"*", op_mul},
              {"/", op_div},
              {"%", op_mod},
              {NULL, NULL}
       };

       while (ops[i])
}
