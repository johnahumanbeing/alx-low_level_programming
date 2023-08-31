#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip from one number to another
 * @n: the giving number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int c = 0;

	/* calculating the XOR of the two numbers to get the bits that are diff */
	while (bits != 0)
	{
		c += bits & 1;
		bits >>= 1;
	}
	return (c);
}
