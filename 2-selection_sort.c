#include "sort.h"

/**
 * selection_sort - sort integers using selection sort algorithm implementation
 * @array: array to be sorted
 * @size: unsigned int length of array
 *
 * Return: No return value
 */
void selection_sort(int *array, size_t size)
{
	int min_index, min, i, j, len, tmp;

	len = (int) size;

	if (array == NULL)
		return;
	if (len < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		/*find minimum in unsorted portion*/
		min = array[i];
		min_index = i;
		for (j = i; j < len; j++)
		{
			if (array[j] < min)
			{
				min_index = j;
				min = array[j];
			}
		}

		/*resort unsorted portion if required*/
		if (min_index != i)
		{
			tmp = array[i];
			array[i] = min;
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
