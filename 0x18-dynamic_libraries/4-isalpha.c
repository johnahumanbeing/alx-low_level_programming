#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is success else 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
