#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp;
	int count = 0;
	int i = 0;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	while (i < count)
	{
		int j = i;
		while (j > 0 && temp->n < current->n[j])
		{
			temp = current->n;
			current->n = current->n[j - 1];
			current->n[j - 1] = temp;
		}
		i = i + 1;
	}
}

