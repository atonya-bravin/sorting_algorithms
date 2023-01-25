#include "sort.h"
#include <stdlib.h>

void insertion_sort_list(listint_t **list)
{
	listint_t **temp = malloc(sizeof(listint_t));
	listint_t **prev = malloc(sizeof(listint_t));
	listint_t **current = list;

	while (*current != NULL)
	{
		*prev = (*current)->prev;
		if (*prev != NULL)
		{
			if ((*prev)->n > (*current)->n)
			{
				*temp = *prev;
				*prev = *current;
				*current = *temp;
			}
		}
		*current = (*current)->next;
	}
}
