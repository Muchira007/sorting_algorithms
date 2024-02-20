#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_Sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_Sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = true;

	if (array == NULL || size < 2)
		return;

	while (bubbly && len > 0)
	{
		bubbly = false;

		for(i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				bubbly = true;
			}
		}
		len--;
	}
}
