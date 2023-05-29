#include "main.h"
/**
 *swap_int -function that swaps the values of two integers.
 *@a:first pointer
 *@b:second pointer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
