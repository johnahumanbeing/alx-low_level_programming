#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion-function thhat prints a string in reverse
 * @s:the string to be reversed
 *
 * Return:nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar (*s);
}
