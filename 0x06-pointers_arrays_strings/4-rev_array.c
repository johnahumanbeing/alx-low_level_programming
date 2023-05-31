#include "main.h"
/**
 *reverse_array-reverses the content of an array
 *@a:array to be reversed
 *@n:number of elements in an array
 *Return:
 */
void reverse_array(int *a, int n)
{
	int j, b, temp;

	for (j = 0, b = n - 1; j < b; j++, b--)
	{
		temp = a[j];
		a[j] = a[b];
		a[b] = temp;
	}
}
