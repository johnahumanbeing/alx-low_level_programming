#include "variadic_functions.h"

/**
 * print_numbers-the function prints numbers that are seperated by a seperator
 * @separator: what is being used to seperate the numbers
 * @n: the number of arguements passed
 *
 * Return: the function does not return anything
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (separator == NULL || i == (n - 1))
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
