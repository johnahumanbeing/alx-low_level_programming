#include "main.h"

/**
 *_strlen_recursion-function that returns length of a string
 *@s:the string to be checked length
 *
 *Return:nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
