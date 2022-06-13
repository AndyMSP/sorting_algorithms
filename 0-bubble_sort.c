#include "sort.h"

/**
 * bubble_sort - sort array of integers in ascending order and print the
 * array each time a swap is executed
 * @array: pointer to array of integers
 * @size: size of array
 *
 * Return: No return value
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	unsigned int i;
	bool swapped;

	if (size < 2)
		return;

	swapped = true;
	while (swapped)
	{
		swapped = false;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				swapped = true;
				print_array(array, size);
			}
		}
	}
}
