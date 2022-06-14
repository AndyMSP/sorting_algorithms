#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list of integers in
 * ascending order using the an insertion sort algorithm implementation
 * @list: double pointer to the first node in a doubly linked list
 *
 * Return: no return value
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *node;

	if (list == NULL)
		return;
	if (*list == NULL)
		return;
	head = *list;
	if (head->next == NULL)
		return;

	node = head->next;
	while (node != NULL)
	{
		while (node->n < node->prev->n)
		{
			swap_node_left_1(node, list);
			print_list(*list);
			if (node->prev == NULL)
				break;
		}
		node = node->next;
	}
}


/**
 * swap_node_left_1 - moves specified node 1 to the left
 * @node: pointer to specified node
 * @head: pointer to first node in list
 *
 * Return: No return value
 */
void swap_node_left_1(listint_t *node, listint_t **head)
{
	listint_t *n1, *n2, *n3, *n4, *a, *b, *c, *d;
	int pos;

	/*determine if at either end of list*/
	if (node->prev->prev == NULL)
		pos = 1;
	if (node->prev->prev && node->next)
		pos = 2;
	if (node->next == NULL)
		pos = 3;
	if (node->next == NULL && node->prev->prev == NULL)
		pos = 4;
	/*assign variable to all affected nodes*/
	n3 = node;
	if (pos != 3 && pos != 4)
		n4 = node->next;
	n2 = node->prev;
	if (pos != 1 && pos != 4)
		n1 = node->prev->prev;
	/*assign temporary variables for substitution*/
	if (pos != 1 && pos != 4)
		a = n1->next;
	else
		a = *head;
	b = n2->prev;
	c = n2->next;
	d = n3->next;
	/*replace prev and next values for each node*/
	if (pos != 1 && pos != 4)
		n1->next = c;
	else
		*head = c;
	n3->prev = b;
	n3->next = a;
	n2->prev = c;
	n2->next = d;
	if (pos != 3 && pos != 4)
		n4->prev = a;
}
