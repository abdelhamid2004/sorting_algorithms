#include "sort.h"

/**
 * swp - Fun to swap to values in the array
 * @x: The first varible
 * @y: The second varible
*/

void swp(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


/**
 * selection_sort - Fun to sort array using selection sort
 *
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: Sort and print the array every itiration
*/

void selection_sort(int *array, size_t size)
{
	int sz = size, i, j, mn;

	if (array == NULL || size <= 1)
	{
		return;
	}
	for (i = 0; i < sz - 1; i++)
	{
		mn = i;
		for (j = i + 1; j < sz; j++)
		{
			if (array[j] < array[mn])
			{
				mn = j;
			}
		}
		if (mn != i)
		{
			swp(array + i, array + mn);
			print_array(array, size);
		}
	}

}
