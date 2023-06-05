#include "main.h"
#include <stdio.h>
/**
 *print_chessboard-prints a chess board
 *@a:value of the arrays
 *Return:nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
