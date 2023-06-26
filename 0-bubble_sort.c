#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @x: The first integer to be swapped.
 * @y: The second integer to be swapped.
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to be sorted.
 * @size: array size
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubooles = false;

	if (array == NULL || size < 2)
		return;

	while (bubooles == false)
	{
		bubooles = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubooles = false;
			}
		}
		len--;
	}
}
