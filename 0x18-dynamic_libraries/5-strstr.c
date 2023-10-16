#include <stddef.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: string to be scanned
 * @needle: string to be located
 *
 * Return: a pointer to the beginning of a of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *firstIndex = NULL;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		if (needle[j] && haystack[i] == needle[j])
		{
			if (firstIndex == NULL)
				firstIndex = haystack + i;
			j++;
		}
		else if (needle[j] && haystack[i] != needle[j])
		{
			firstIndex = NULL;
			j = 0;
		}
		else if (needle[j] == '\0')
			break;
		i++;
	}
	return (firstIndex);
}
