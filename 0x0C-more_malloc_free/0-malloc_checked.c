#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked-allocates memmory using malloc
 *@b: the pointer to the memory
 *
 *Return:zero
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
