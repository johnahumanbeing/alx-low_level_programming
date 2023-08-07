#include <stdio.h>
#include <stdlib.h>

/**
 *create_array-creates arrays of chars
 *@size:size of the array
 *@c:the character to be initialized
 *
 *Return:pointer, NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
