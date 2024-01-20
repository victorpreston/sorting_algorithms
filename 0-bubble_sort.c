#include "sort.h"


/**
 * bubble_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array
 * Description: Function that sorts an array using the bubble sort method
 * Return: 0
 */


void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
    bool swapped;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
        swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_func(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
	if (!swapped)
		 break;
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
