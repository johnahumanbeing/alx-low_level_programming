#include "main.h"
/**
 *_strncpy -copies a string to another
 *@dest:the destination
 *@src:the origin
 *@n:the bytes
 *Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (src[a])
		a++;

	for (b = 0; b < n && b <= a; b++)
		dest[b] = src[b];
	for (; b < n; b++)
		dest[b] = '\0';

	return (dest);
}
