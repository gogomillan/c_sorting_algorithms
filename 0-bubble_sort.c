#include "sort.h"

void swap(int *x, int *y);

/**
 * bubble_sort - Sorts an array in ascending order using the Bubble sort algo.
 *
 * @array: The array to order
 * @size: The size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
int swapped;
size_t i;

	if (array == NULL)
		return;

	do {
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(array + (i - 1), array + i);
				print_array(array, size);
				swapped = 1;
			}
		}
	} while (swapped);
}

/**
 * swap - Function that swap two values using bitwise
 *
 * @x: First value
 * @y: Second value
 *
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
