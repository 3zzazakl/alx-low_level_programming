#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search2(int *array, int value, size_t start, size_t end);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recur(int *array, size_t left, size_t right, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_listint(int *array, size_t size);
void free_listint(listint_t *list);
void print_list(const listint_t *list);





#endif /*SEARCH_ALGOS_H*/
