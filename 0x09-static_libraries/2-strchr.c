#include "main.h"

/**
 * _strchr-finds the  first occurence of a charater in a string
 * @s: the string that we are finding the charater in
 * @c:the charater we are finding in s
 *
 * Return: returns a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
