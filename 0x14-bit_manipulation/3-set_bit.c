#include "main.h"

/**
 * set_bit - sets the value of abit to 1 at a given index
 * @n: giving number
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it works, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* checking if index is within range of bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*using left shit operator at index to 1 */
	*n |= 1UL << index;
	return (1);
}
