#include "variadic_functions.h"

/**
 * charaters - prints charaters
 * @arg: list of arguements pointing to a charater
 */

void charaters(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * integers - prints integers
 * @arg: list of arguements pointing to integer
 */

void integers(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}


/**
 * floats - prints floats
 * @arg: list of arguements pointing to a floats
 */

void floats(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * strings - prints strings
 * @arg: list of arguements pointing to a strings
 */

void strings(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all- the function prints anything that is passed to the function
 * @format:the chareters that contains specifers
 *
 * Return: the function does not return anything
 */


void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list args;
	print_t functions[] = {
		{"c", charaters},
		{"i", integers},
		{"f", floats},
		{"s", strings}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].specifer)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print_func(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
