#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: The input number
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n > 0)
	{
		lastDigit = n % 10;
	}
	else
	{
		lastDigit = -(n % 10);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
