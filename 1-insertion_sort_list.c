#include "sort.h"

/**
 * insertion_sort_list -sorts a doubly linked list
 * @list: double linked
 * Return: void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	temp = (*list)->next;

	while (temp)
	{
		while (temp->prev && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
					temp->next->prev = temp->prev;
				temp->next = temp->prev;
				temp->prev = temp->prev->prev;
				temp->next->prev = temp;
			
			if (!temp->prev)
				*list = temp;
			else
				temp->prev->next = temp;
					print_list(*list);
		}
		temp = temp->next;
	}
}
