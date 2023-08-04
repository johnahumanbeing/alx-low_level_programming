#include "main.h"

/**
 * _strcmp -  compares if two strings are equal or the same
 * @s1: the first string being compared
 * @s2: the second string being compared
 *
 * Return: returns 1 if the strings are the same and
 * returns 0 if the strings and not
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
