#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10times,in lowercase
 *
 * Return : 0
 */

void print_alphabet_x10(void)
{
	int time;
	int letter;

	for (time = 0; time < 10; time++)
{
		for (letter = 'a'; letter <= 'z'; letter++)

{
			putchar(letter);
}
		putchar('\n');
}
}
