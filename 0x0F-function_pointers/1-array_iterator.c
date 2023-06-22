#include "function_pointers.h"

/**
 * array_iterator -the function passes each element to the callback function
 * @array: pointer to an array that we are interating over
 * @size: the size of the array
 * @action: the function executed on each array
 *
 * Return: the function does not return anything
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i, minimum = 0;

	if (array == NULL || size < minimum || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
