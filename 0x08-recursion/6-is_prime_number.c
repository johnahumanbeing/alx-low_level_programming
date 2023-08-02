#include "main.h"

/**
 *_is_prime - checks if a umber is prime
 *@n:the number to check
 *@d:counter
 *Return: 1 if prime number else 0
 */

int _is_prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d != 0)
		return (_is_prime(n, d + 1));
	else
		return (0);
}

/**
 *is_prime_number-returns 1 if integer is prime number else 0
 *@n:the input integer
 *
 *Return:zeroo
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_is_prime(n, 2));
}

