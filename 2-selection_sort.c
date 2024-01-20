#include "sort.h"

/**
 * selection_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array given
 * Descrtiption: Function that sorts an array using the Selection
 * sort algotrithm
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if (i != min_idx)
		{
			swap_func(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap_func - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
