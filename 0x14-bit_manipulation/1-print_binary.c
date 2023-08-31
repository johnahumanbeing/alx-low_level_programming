#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return:
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int print = 0;

	while (binary > 0)
	{
		if ((n & binary) == binary)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}
		binary >>= 1;
	}
	if (!print)
	{
		_putchar('0');
	}
}
