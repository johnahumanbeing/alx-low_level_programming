#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *_memset-sets a specific value in aspace of memory
 *@s:pointer to memory
 *@c:character
 *@n:the size
 *Return:pointer to memory space
 */

char *_memset(char *s, char c, unsigned int n)
{
	char *mem = s;

	while (n--)
		*mem++ = c;
	return (mem);
	/* yaah eeh */
}
/**
 *_calloc-allocates memory for an array using malloc
 *@nmemb:number of bytes in elements
 *@size:size of the bytes
 *
 *Return:if nmemb,size is 0 _calloc rets NULL else if malloc fails
 *_calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	/*lets go john */
	return (ptr);
}
