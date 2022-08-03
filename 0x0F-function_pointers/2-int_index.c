#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array given
 * @size: number of elements in the given array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * if no element matches, or size is equal to or less than zero, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
