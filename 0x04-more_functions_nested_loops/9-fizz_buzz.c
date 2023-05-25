#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 *
 * Description: prints the numbers from 1 to 100
 * But for multiples of three print Fizz and
 * For the multiples of five print Buzz and for
 * Multiples of both three and five print FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
