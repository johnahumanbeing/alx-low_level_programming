#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this function will write all the alphabet in the lower
 * Case than in the upper case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int lowerLetter;
	int upperLetter;

	for (lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
	{
		putchar(lowerLetter);
	}

	for (upperLetter = 'A'; upperLetter <= 'Z'; upperLetter++)
	{
		putchar(upperLetter);
	}
	putchar('\n');
	return (0);
}
