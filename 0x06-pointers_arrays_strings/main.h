#ifndef MAIN_H
#define MAIN_H

/* Headers_Declarations */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Functions_Declarations */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void print_number(int n);
void reverse_string(char *n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_line(char *c, int s, int l);
void print_buffer(char *b, int size);
#endif /* MAIN_H */
