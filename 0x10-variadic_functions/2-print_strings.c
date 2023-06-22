#include "variadic_functions.h"

/**
 * print_strings-the function prints strings seperated by the separator
 * @separator: what is printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: the function does not return anything
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");

		else if (separator == NULL || i == (n - 1))
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", str, separator);
		}
	}

	printf("\n");
	va_end(args);
}
