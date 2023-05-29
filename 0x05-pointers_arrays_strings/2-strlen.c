#include "main.h"
/**
 * _strlen -function that returns the length of a string.
 * @s:the refference string
 * Return:string length
 */
int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
