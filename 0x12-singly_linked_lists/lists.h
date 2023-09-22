#ifndef MAIN_H
#define MAIN_H

/******Headers_Declarations*****/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**********Strcut Declarations*********/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*********Functions_Declarations*******/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif /*MAIN_H*/
