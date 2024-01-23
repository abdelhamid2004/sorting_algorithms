#include "sort.h"

/**
 * print_array - To print the members of the array
 * @array: The array to print
 * @size: The size of the array
*/

void print_array(const int *array, size_t size)
{
	int i, sz = size;

	for (i = 0; i < sz; i++)
	{
		printf("%d", array[i]);
		if (i < sz - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

