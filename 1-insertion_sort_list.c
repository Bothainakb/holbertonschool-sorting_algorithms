/* 1-insertion_sort_list.c */

#include "sort.h"

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: double pointer to list
 * @node: node to move left
 */
static void swap_nodes(listint_t **list, listint_t *node)
{
	listint_t *prev = node->prev;
	listint_t *next = node->next;

	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;

	node->prev = prev ? prev->prev : NULL;

	if (node->prev)
		node->prev->next = node;

	node->next = prev;
	prev->prev = node;

	if (!node->prev)
		*list = node;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: double pointer to list head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		tmp = current;

		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			swap_nodes(list, tmp);
			print_list(*list);
		}

		current = current->next;
	}
}
