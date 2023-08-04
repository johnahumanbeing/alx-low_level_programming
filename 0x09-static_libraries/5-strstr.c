#include "main.h"

/**
 * _strstr-the function returns a pointer to the first occurence of a substring
 * @haystack: the string we are searching foor the substring in
 * @needle:the substring that we are searching in haystack
 *
 * Return: a pointer to the begining of the substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && need != 0)
		{
			need++;
			hay++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
