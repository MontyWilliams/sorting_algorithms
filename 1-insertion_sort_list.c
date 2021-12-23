#include "sort.h"
/**
 * insertion_sort_list - sort doubly linked list
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *temp1;

	if (list != NULL || *list != NULL)
	{
		current = *list;
		temp = current->next;
		if (temp == NULL)
			return;
		while (temp != NULL)
		{
			if (current->n > temp->n)
			{
				while (current->prev != NULL && current->n > temp->n)
				{
					if (current->prev->n < temp->n)
						break;
					current = current->prev;
				}
				temp1 = current;
				current = temp;
				temp = temp1;
				temp = current->next;
				print_list(*list);
			}
			if (current->next != NULL)
				current = current->next;
			temp = current->next;
		}
	}
}
