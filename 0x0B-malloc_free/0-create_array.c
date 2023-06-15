#include "main.h"
/**
 *create_array-creates an array of chars
 *@size:size of our array
 *@c:the character to initialize arrays
 *Return:pointer to array else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}