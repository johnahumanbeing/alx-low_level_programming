#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: the array to be printed
 * @start: the index of the first element
 * @end: the index of the last element
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t j;
	char *sep = "";

	printf("Searching in array: ");
	for (j = start; j <= end; j++)
	{
		printf("%s%d", sep, array[j]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL,return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
