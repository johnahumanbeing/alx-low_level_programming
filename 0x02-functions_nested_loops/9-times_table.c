#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: does not return anything
 */

void times_table(void)
{
	int num, mult, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * mult;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
