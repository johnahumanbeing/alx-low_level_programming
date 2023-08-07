#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup-function that returns a pointer to a newly allocated space in memory
 *@str:string to copy
 *Return:pointer, NULL on failure
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	dup_str = malloc(sizeof(char) * len + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; str[i]; i++)
		{
			dup_str[i] = str[i];
		}

		dup_str[len] = '\0';
	}

	return (dup_str);
}
