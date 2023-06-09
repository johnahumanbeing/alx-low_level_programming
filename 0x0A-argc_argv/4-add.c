#include "main.h"
/**
 *main-adds positive numbers
 *@argc:argument count
 *@argv:argument array
 *Return:Error if no digit else 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum;

		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
