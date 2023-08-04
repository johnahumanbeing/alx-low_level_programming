#include "main.h"

/**
 * _strncpy - copy one string to another
 * @dest: the string which the src is being copied to
 * @src: the string being copies to dest
 * @n: the maximum number of charaters to be copied
 *
 * Return: returns the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
