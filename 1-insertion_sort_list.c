#include "sort.h"

/**
 * swp_nd - Swap two nodes
 *
 * @x: Pointer to the head of the list
 * @y: Pointer to the first node
 * @z: The second node
*/
void swp_nd(listint_t **x, listint_t **y, listint_t *z)
{
	(*y)->next = z->next;
	if (z->next != NULL)
		z->next->prev = *y;
	z->prev = (*y)->prev;
	z->next = *y;
	if ((*y)->prev != NULL)
		(*y)->prev->next = z;
	else
		*x = z;
	(*y)->prev = z;
	*y = z->prev;
}


/**
 * insertion_sort_list - Sorting a doubly linked list
 *
 * @list: List to be sorted
 *
 * Describtion: Print the list every sort
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *it, *in, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (it = (*list)->next; it != NULL; it = temp)
	{
		temp = it->next;
		in = it->prev;
		while (in != NULL && it->n < in->n)
		{
			swp_nd(list, &in, it);
			print_list((const listint_t *)*list);
		}
	}

}
