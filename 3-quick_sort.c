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
 * parti - To divide the array into partions
 * @array: The array to divide
 * @l: The left side
 * @r: The right side
*/
int parti(int *array, size_t size, int l, int r)
{
	int *p, i, j;

	p = array + r;
	for (i = j = l; j < r; j++)
	{
		if (array[j] < *p)
		{
			if (i < j)
			{
				swp(array + i, array + j);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > *p)
	{
		swp(array + i, p);
		print_array(array, size);
	}
	return (i);
}
/**
 * sorti - Fun for sorting
 * @array: The array will be sorted
 * @size: The size
 * @l: Left side
 * @r: Right side
*/
void sorti(int *array, size_t size, int l, int r)
{
	int pr;

	if (l < r)
	{
		pr = parti(array, size, l, r);
		sorti(array, size, l, pr - 1);
		sorti(array, size, pr + 1, r);
	}
}

/**
 * quick_sort - FUN to sort by quick sorting algo
 * @array: The array will be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	return;
	sorti(array, size, 0, size - 1);
}
