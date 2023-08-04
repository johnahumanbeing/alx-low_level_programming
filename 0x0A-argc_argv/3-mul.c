#include "main.h"

/**
 *main-program that multiplies two numbers
 *@argc:argument count
 *@argv:argument vector
 *
 *Return:nothing
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		unsigned int mult;

		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
