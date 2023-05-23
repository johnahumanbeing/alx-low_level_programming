#include <stdio.h>
/**
 * main - print fibonacci
 * fibonacci s
 *
 * Return: always 0
 */
int main(void)
{
	long int u0 = 1, u1 = 2, sum = 2;
	int ip;

	for (ip = 1; ip < 31; ip++)
	{
	if ((u0 + u1) % 2 == 0)
	sum += u0 + u1;

	u1 = u0 + u1;
	u0 = u1 - u0;
	}
	printf("%ld\n", sum);

	return (0);
}
