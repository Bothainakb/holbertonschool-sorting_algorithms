#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to previous node
 * @next: Pointer to next node
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * print_array - Prints an array of integers
 * @array: The array
 * @size: Number of elements
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a list of integers
 * @list: The list
 */
void print_list(const listint_t *list);

/**
 * bubble_sort - Sorts an array using Bubble sort
 * @array: Array to sort
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */
