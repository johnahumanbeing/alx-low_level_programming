#include "main.h"
/**
 * _strcpy -  copies a string including the terminating
 * null byte (\0), to a buffer
 *
 * @src: pointer to the source string
 * @dest: pointer to the buffer
 *
 * Return: pointer to the dest buffer
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0, length = 0;

	while (src[index++])
		length++;
	for (index = 0; index <= length; index++)
		*(dest + index) = *(src + index);
	return (dest);
}
