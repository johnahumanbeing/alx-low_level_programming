#include <stdio.h>

/**
 * main - main prints various sizes of datatypes in c
 * Return:always 0
 */

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	return (0);
}
