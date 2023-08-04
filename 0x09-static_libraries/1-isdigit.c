#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks for digits
 *@c:the number to be checked
 *Return: 1 if ssuccess else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
