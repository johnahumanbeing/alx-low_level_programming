#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _memcpy-it copies the data from src to dest
 * @dest:where the data will be copied
 * @src:where the data will be copied from
 * @n:number of bytes to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * _realloc- reallocates memory if the current is less than needed
 * @ptr: pointer to the old memory location
 * @old_size: the size of ptr
 * @new_size: the size to be created to replace old_size
 *
 * Return: returns a pointer to the new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int minimum = 0;
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == minimum && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		_memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		_memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);
	return (new_ptr);
}
