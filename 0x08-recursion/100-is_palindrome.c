#include "main.h"

/**
 * _strlen- finds the length of a string
 * @s:the string we are calculating the length for
 *
 * Return: returns the length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * if_palindrome- checks if a string is a palindrome
 * @len:the length of the string
 * @i:the index of the string
 * @str: the string we are checking
 *
 * Return: if palindrome it returns 1 else returns 0
 */

int if_palindrome(char *str, int len, int i)
{
	if (str[i] == str[len / 2])
		return (1);

	if (str[i] == str[len - i - 1])
		return (if_palindrome(str, len, i + 1));
	return (0);
}
/**
 * is_palindrome-checks if a string is a palindrome
 * @s:the string that we are checking
 *
 * Return: returna 1 if its a palindrome and 0 its not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (if_palindrome(s, len, i));
}
