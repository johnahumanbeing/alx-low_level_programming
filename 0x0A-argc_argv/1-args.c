#include "main.h"

/**
 *main-prints number of arguments passed innit
 *@argc:argument count
 *@argv:the argument vector
 *
 *Return:void
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
