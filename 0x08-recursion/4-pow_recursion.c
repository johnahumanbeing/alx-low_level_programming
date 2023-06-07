#include "main.h"
/**
 *_pow_recursion-prints value of x to y
 *@x:small value
 *@y:big value
 *Return:nothing
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
