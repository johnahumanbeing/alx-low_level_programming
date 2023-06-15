#include "main.h"
#include <stdlib.h>
/**
 *array_range-creates an array of integers
 *@min:smallest number of integers
 *@max:largest number of integers
 *
 *Return:if min>max,NULL else if malloc fails,NULL
 */
int *array_range(int min, int max)
{
	int *integer;
	int a, length = 0;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	integer = malloc(length * sizeof(int));
	if (integer == NULL)
		return (NULL);
	for (a = 0; a < length; a++)
		*(integer + 1) = min++;
	return (integer);
	/* this must work */
}
