#include "sort.h"

/**
 * swap_int - Swap two integers in an array
 * @a: The first integer to swap
 * @b: THe second integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: an array of integers to sort
 * @size: size of the array
 *
 * Description: Prints the array after each step.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(array + j, array + j + 1);
				for (k = 0; k < size; ++k)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}
}
