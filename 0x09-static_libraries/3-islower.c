#include "main.h"

/**
 * _islower - checks for lowercase charater
 * @c: the  charater being checked if its lowercase
 *
 * Return: it return 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
