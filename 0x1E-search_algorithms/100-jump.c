#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, prev_index = 0;

	if (!array)
		return (-1);

	while (array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index,
				array[index]);
		prev_index = index;
		index += sqrt(size);
		if (index >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev_index,
			index);

	while (array[prev_index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index,
				array[prev_index]);
		prev_index++;
		if (prev_index >= size)
			return (-1);
	}

	if (array[prev_index] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index,
				array[prev_index]);
		return (prev_index);
	}
	return (-1);
}
