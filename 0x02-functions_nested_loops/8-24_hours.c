#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: No return
 */
void jack_bauer(void)
{
	int first, second;

	first = 0;
	while (first < 24)
	{
		second = 0;
		while (second < 60)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second / 10 + '0');
			_putchar(second % 10 + '0');
			_putchar('\n');
			second++;
		}
		first++;
	}
}
