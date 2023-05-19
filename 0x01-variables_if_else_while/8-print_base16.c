#include <stdio.h>
/**
 * main - This function will print the all single digit
 * numbers of base 16 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	do {
		printf("%x", number++);
	} while (number % 16 != 0);
	putchar('\n');
	return (0);
}
