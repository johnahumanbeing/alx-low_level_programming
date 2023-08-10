#include <stdlib.h>
#include <stdio.h>

/**
 *array_range-creates an array of integers
 *@min:minimum value
 *@max:maximum valua
 *
 *Return:if min >max,NULL
 */

int *array_range(int min, int max)
{
	int *integer;
	int a, element_no, size;

	if (min > max)
	{
		return (NULL);
	}
	element_no = max - min + 1;
	size = element_no * sizeof(int);
	integer = malloc(size);

	if (integer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < element_no; a++)
	{
		integer[a] = min + a;
	}
	return (integer);
}
