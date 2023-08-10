#include <stdlib.h>
#include <stdio.h>

/**
 *_memset-it sets a specific value in memory space
 *@s:the pointer to memory
 *@c:a character
 *@n:the size
 *Return:pointer to memory space
 */

char *_memset(char *s, char c, unsigned int n)
{
	char *mem = s;

	while (n--)
		*mem++ = c;
	return (mem);
}

/**
 *_calloc- allocates memory for an array using malloc
 *@nmemb:number ofbytes in the elements
 *@size:size of bytes
 *Return:nothing
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
	/*just hanging around?*/
	return (ptr);
}
