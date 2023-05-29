#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the giving string
 */
void puts_half(char *str)
{
	int half = 0, i = 0, length = 0;

	while (str[i++])
		length++;
	half = length / 2;

	if (length % 2 == 0)
	{
		for (i = half; i < length; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = half + 1; i < length; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
