#include "main.h"

/**
 * print_most_numbers- prints numbers 0 to 9
 */

void print_most_numbers(void)
{
	char number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
