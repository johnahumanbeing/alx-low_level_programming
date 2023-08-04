#include "main.h"

/**
 * _isalpha - checks if an input is a alphabet charater
 * @c: the charater we are checking
 *
 * Return: returns 1 if input is a charater else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
