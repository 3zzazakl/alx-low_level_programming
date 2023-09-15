#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/********Headers_Definations****/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/*********Function_Definations**********/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /*VARIADIC_FUNCTION_H*/
