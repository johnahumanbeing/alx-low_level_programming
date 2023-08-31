#include "main.h"

/**
 * clear_bit -sets the value of a bit to 0 at a given index
 * @n: the giving number
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it works or -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* checking if index is within range of the bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/* using and operator to clear the bit at index to 0 */
	*n &= ~(1UL << index);
	{
		return (1);
	}
}
