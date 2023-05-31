#include "main.h"
/**
 **_strcat -concatenates two strings
 *@dest:the string to be appended
 *@src:the concatetor
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; src[b]; a++, b++)
		dest[a] = src[b];

	return (dest);
}
