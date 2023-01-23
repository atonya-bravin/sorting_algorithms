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

	for (element_ctr = 0; element_ctr < size; element_ctr++)
	{
		for (looper = 0; looper < size; looper++)
		{
			if (array[element_ctr] < array[looper])
			{
				temp = array[element_ctr];
				array[element_ctr] = array[looper];
				array[looper] = temp;
			}
		}
	}
}
