#include "main.h"

/**
 * print_times_table - multiplication table
 * @n: number or rows and columns
 * Return: void
 */
void print_times_table(int n)
{
	int col, row;

	if (n > 15 || n < 0)
		return;
	for (row = 0 ; row <= n ; row++)
	{
	for (col = 0 ; col <= n ; col++)
	{
		if (col != 0)
		{
		if ((row * col) < 100)
			_putchar(' ');
		if ((row * col) < 10)
			_putchar(' ');
		_putchar(' ');
		}
		if (row * col >= 100)
		{
		_putchar('0' + (row * col) / 100);
		_putchar('0' + ((row * col) % 100) / 10);
		_putchar('0' + ((row * col) % 100) % 10);
		}
		else if (row * col >= 10)
		{
		_putchar('0' + (row * col) / 10);
		_putchar('0' + (row * col) % 10);
		}
		else
			_putchar('0' + (row * col));
		if (col  != n)
			_putchar(',');
	}
	_putchar('\n');
	}
}
