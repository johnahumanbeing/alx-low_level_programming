#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int number, i;

	for (i = 0; i < 10; i++)
	{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
			number++;
		}
		_putchar('\n');
	}
}
