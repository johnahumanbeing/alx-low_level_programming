#include "main.h"
/**
 *find_sqrt_recursion-finds the natural square
 *@n:the number given
 *@counter:counter
 *Return:natural square root
 */

int find_sqrt_recursion(int n, int counter)
{
	if (counter * counter == n)
		return (counter);
	else if (counter * counter < n)
		return (find_sqrt_recursion(n, counter + 1));
	else
		return (-1);
	/* consider if number given is a perfect square */
}

/**
 *_sqrt_recursion-functionn that returns natural square root of a number
 *@n:the natural number
 *
 *Return:nothing
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt_recursion(n, 0));
}
