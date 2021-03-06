#ifndef SORT_H
#define SORT_H

/*****Struct definitions*****/

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*****Typedefs*****/
typedef int bool;
#define true 1
#define false 0


/*****Other header files to include*****/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/*****Task function prototypes*****/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


/*****Provided function prototypes*****/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/*****Additional function prototypes*****/
void swap_node_left_1(listint_t *node, listint_t **head);
int partition(int *array, int low, int high, size_t size);
void qs_recursive(int *array, int low, int high, size_t size);

#endif
