#include "main.h"
/**
 * puts2 - prints characters skipping one
 * @str: character string variable
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	/* check for length of string */
	i = 0;
	while (str[i])
		i++;
	/* print string while avoiding surpassing its length*/
	for (j = 0; j < i; j += 2)
		putchar(str[j]);
	putchar('\n');
}
