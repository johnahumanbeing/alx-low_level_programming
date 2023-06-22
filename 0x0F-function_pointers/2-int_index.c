#include "function_pointers.h"

/**
 * int_index - the function searches for an integer in an array
 * @array: pointer to the array that we are searching
 * @size: the size of the array
 * @cmp: the callback function
 *
 * Return: the function returns the index of the first element of
 * which the cmp function does not return 0, if no element matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, minimum = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= minimum)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
