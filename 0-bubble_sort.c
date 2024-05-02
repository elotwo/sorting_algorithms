#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int min = array[0];
	int swapped = 0;
	for (i = 1; i < size; ++i)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	while (array[0] != min)
	{
		for (i = 0; i < size -1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				break;
			}
		}
		for (i = 0; i < size - 1; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[size - 1]);
		if (!swapped) 
		{
			break;
		}
	}

}
