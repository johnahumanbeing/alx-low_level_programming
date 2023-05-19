#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it assigns random number to a variable n each time it is executed
 * and prints the last digit of the umber stored in the variable n
 *
 * Return: a 0 (success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
