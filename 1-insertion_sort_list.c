#include "sort.h"

/**
 * insertion_sort_list - perform insertion sort on a linked list
 * @list: head node of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *swap, *prv;

	if (!list || !*list)
		return;

	current = *list;
	while ((current = current->next))
	{
		swap = current;
		while (swap->prev && swap->n < swap->prev->n)
		{
			prv = swap->prev;
			if (swap->next)
				swap->next->prev = prv;
			if (prv->prev)
				prv->prev->next = swap;
			else
				*list = swap;
			prv->next = swap->next;
			swap->prev = prv->prev;
			swap->next = prv;
			prv->prev = swap;

			print_list(*list);
		}
	}
}
