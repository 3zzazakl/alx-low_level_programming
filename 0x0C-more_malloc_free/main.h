#ifndef MAIN_H
#define MAIN_H

/* Headers-Declarations */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/* Functions-Declarations */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
