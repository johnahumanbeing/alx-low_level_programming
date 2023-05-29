#include "main.h"
/**
 *print_rev-function that prints a string, in reverse
 *@s:string to reverse
 */
void print_rev(char *s)
{
	int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
