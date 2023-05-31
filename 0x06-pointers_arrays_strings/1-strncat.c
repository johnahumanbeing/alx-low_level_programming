#include "main.h"
/**
 * _strncat -concentates two strings
 *@dest:the destination
 *@src:the origin
 *@n:the bytes
 *Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; b < n && src[b]; a++, b++)
		dest[a] = src[b];
	return (dest);
}

