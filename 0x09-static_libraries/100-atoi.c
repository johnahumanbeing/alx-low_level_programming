#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string that is being converted
 *
 * Return: returns the integer
 */

int _atoi(char *s)
{
	unsigned int result;
	int sign;

	result = 0;
	sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
			break;
	} while (*s++);

	return (sign * result);
}
