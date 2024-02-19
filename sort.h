#ifndef SORT_H
#define SORT_H
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
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * Protorpyes for default functions
 */
void print_array(const int *array, size_t size)
void print_list(const listint_t *list)

void bubble_Sort(int *array, size_t size
#endif
