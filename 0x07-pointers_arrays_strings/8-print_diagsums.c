#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals
 * @a:the matrix integer
 * @size :the size of the multi-array
 *
 * Return:returns 0
 */

void print_diagsums(int *a, int size)
{
	int i, total_one, total_two;

	total_one = 0;
	total_two = 0;
	for (i = 0; i < size; i++)
	{
		total_one += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		total_two += a[i];
		a -= size;
	}

	printf("%d, %d\n", total_one, total_two);
}
