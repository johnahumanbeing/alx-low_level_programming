#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of string
 * @str: the giving string
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	if (str == NULL)
		return (0);
	while (str[i++])
		len++;
	return (len);
}
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenation string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2) + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0, j = 0; i < len1; i++, j++)
	{
		*(concat + j) = *(s1 + i);
	}
	for (i = 0; i < len2; i++, j++)
	{
		*(concat + j) = *(s2 + i);
	}
	*(concat + j) = '\0';
	return (concat);
}
