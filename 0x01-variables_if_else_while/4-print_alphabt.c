#include <stdio.h>

/**
 * main-prints out the alphabet except q & e
 *
 * Return: a 0
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		if (!(a == 101 || a == 113))
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
