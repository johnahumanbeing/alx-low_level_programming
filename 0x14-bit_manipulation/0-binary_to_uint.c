#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, else 0 if there is
 * more chars in the string b that isnt 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		uint <<= 1;
		uint += b[i] - '0';
		i++;
	}

	return (uint);
}
