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
 * bubble_sort - Sort two variables in the array
 * @array: Array of integers
 * @size: The size of the array
 * Description: Prints the array every swap
*/

void bubble_sort(int *array, size_t size)
{
	int i, sz = size;
	int flag = 0;

	if (array == NULL || size == 1)
	{
		return;
	}
	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < sz - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swp(array + i, array + i + 1);
				print_array(array, size);
				flag = 0;
			}
		} }		
}
