#include <stdio.h>
/**
 * main - print fibonacci
 * fibonacci s
 *
 * Return: always 0
 */
int main(void)
{
	long int u0 = 1, u1 = 2;
	int ip = 0;

	printf("%ld, ", u0);
	printf("%ld, ", u1);
	for (ip = 1; ip < 48; ip++)
	{
	printf("%ld, ", u0 + u1);
	u1 = u0 + u1;
	u0 = u1 - u0;
	}
	printf("%ld\n", u0 + u1);

	return (0);
}
