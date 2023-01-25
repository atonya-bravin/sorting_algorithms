#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort -  sorts an array of integers in ascendinig
 * order using the Bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int element_ctr;
	unsigned int looper;
	int temp;

	if (array != NULL)
	{
		for (element_ctr = 0; element_ctr < size - 1; element_ctr++)
		{
			for (looper = 0; looper < size - element_ctr - 1; looper++)
			{
				if (array[looper] > array[looper + 1])
				{
					temp = array[looper];
					array[looper] = array[looper + 1];
					array[looper + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
