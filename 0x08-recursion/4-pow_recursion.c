#include "main.h"

/**
 *_pow_recursion-function that returns value of x raised to power y
 *@x:first value(small)
 *@y:second value(big)
 *
 *Return:zeroo
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
