#include "variadic_functions.h"

/**
 * sum_them_all - the function returns the sum of all the passed arguements
 * @n: the number of arguements passed to sum_them_all function
 *
 * Return: the function returns the sum of all the arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, minimum = 0;

	va_list args;

	sum = 0;

	if (n == minimum)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);

	return (sum);
}
