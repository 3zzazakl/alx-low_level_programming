#ifndef MAIN_H
#define MAIN_H

/*******Headers_Declarations****/
#include <stdio.h>
#include <unistd.h>


/******Structure_Declarations*********/





/**********Functions_Declarations******/
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);



#endif /*MAIN_H*/
