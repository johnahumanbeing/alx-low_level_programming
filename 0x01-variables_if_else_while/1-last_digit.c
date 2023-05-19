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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit == 0)
		printf("and is 0\n");
	else if (lastDigit < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is greater than 5\n");
	return (0);
}
