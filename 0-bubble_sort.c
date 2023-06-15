#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using Bubble sort algorithm.
 * @array: The integer array to sort
 * @size: The size of the integer array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int counter = 0;
	int aux = 0;
       	int max = 0;
       	int swap = 1;

	if (!array || size < 2)
		return;

	max = size - 1;

	for (; counter < max; ++counter)
	{
		if (array[counter] > array[counter + 1])
		{
			aux = array[counter];
			array[counter] = array[counter + 1];
			array[counter + 1] = aux;
			swap = 1;
			print_array(array, size);
		}

		if (swap == 1 && counter == max - 1)
			counter = -1, swap = 0, --max;
	}
}
