#include "main.h"

/**
 * _abs -computes the absolute value of an integer
 * @num: the number we aare checking
 *
 * Return: returns the absolute value of an integer
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	else
	{
		return (num);
	}
}
