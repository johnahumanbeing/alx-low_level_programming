#include "main.h"

/**
 * _strpbrk-returns the pointer to the first occurence of a charater in s
 * that is found in f
 * @s: string that we are searching
 * @accept:string that we are comparing charaters of s with
 *
 * Return: the pointer to the first charater that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
