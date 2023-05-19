#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: function to print all the alphabet in lower case
 * In Reverse follow by new line by using putchar function twice
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
