#include "main.h"

/**
 * _strcpy - the function copies strings
 * @dest: copying destination
 * @src: the string being copied
 *
 * Return: returns a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
