#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- prints the alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	do {
		putchar(letter++);
	} while (letter <= 'z');
	putchar('\n');
}
