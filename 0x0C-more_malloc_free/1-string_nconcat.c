#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_strlen-reurns strings length
 *@str:string
 *Return:length
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (0);
	while (str[i++])
		len++;
	return (len);
}
/**
 *string_nconcat-concatenates two strings
 *@s1:first string
 *@s2:second string
 *@n:number of the chars to concenate
 *
 * Return:NULL if fails else string concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concatLen = 0, i, k;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		concatLen = len1 + len2;
	else
		concatLen = len1 + n;
	concat = malloc(sizeof(*concat) * concatLen + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0, k = 0; len1 != 0 && s1[i]; i++, k++)
		concat[k] = s1[i];
	for (i = 0; len2 != 0 && s2[i] && i < n; k++, i++)
		concat[k] = s2[i];
	concat[k] = '\0';
	return (concat);
}
