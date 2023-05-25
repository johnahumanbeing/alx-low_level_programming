#include "main.h"
/**
 * main - prints the largest prime factor
 * Return: 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	int i;

	for (i = 2; i < number; i++)
	{
		while (number % i == 0)
		{
			number /= i;
		}
	}
	printf("%ld\n", number);
	return (0);
}
