#include "main.h"

/**
 * get_bit - returns value of a  bit at a given index
 * @n: the giving number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* checking if index is within range of given bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/* shifting the bits of n to the right */
	return ((n >> index) & 1);
}
