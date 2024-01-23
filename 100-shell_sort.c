#include "sort.h"
/**
 * shell_sort - Sorting in shell algo
 * @array: Array to be sorted
 * @size: Size of the array
 * Description: Print the array every itiration
*/
void shell_sort(int *array, size_t size)
{
	int i, gap, tmp, j, sz = size;

	if (array == NULL || size <= 1)
	{
		return;
	}
	for (gap = 1; gap < (sz / 3);)
	{
		gap = gap * 3 + 1;
	}
	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < sz; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
