#include "main.h"

/**
 * _strspn-determines how many charaters in an initial segment
 * of a string are made up of a specific set of charaters
 * @s: the string being searched
 * @accept: the charaters being looked up in s
 *
 * Return:calculates the length of the initial segment of the string s
 * that consists of entirely of charaters from the string 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i;

	len = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (len);
			}
		}
		s++;
	}
	return (len);
}
