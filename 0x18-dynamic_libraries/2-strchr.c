#include "main.h"
#define NULL ((void *)0)

/**
 *_strchr- locates a character in a string
 *@s:input string
 *@c:character to be located
 *Return:pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int number = 0;

	while (s[number] != '\0' && s[number] != c)
		number++;

	if (s[number] == c)
		return (&s[number]);
	else
		return (NULL);
}
