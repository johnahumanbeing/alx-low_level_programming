#include <stdlib.h>
#include <stdio.h>

/**
 * main -function to print the alphabet in lower case followed
 * by a new line by using putchar function twice
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
