#include "main.h"
/**
 *_strspn- gets the length of a prefix
 *@s:string to scan
 *@accept:accept bytes
 *Return:number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0, match;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				count++;
				break;
			}
		}
		if (match == 0)
		{
			break;
		}
	}
	return (count);
}
