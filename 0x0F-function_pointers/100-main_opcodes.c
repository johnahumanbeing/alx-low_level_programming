#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function printd the opcodes of itself.
 * @argc: The number of commandline arguements
 * @argv: An array of pointers to the commandline arguements
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int nums, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nums = atoi(argv[1]);

	if (nums < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nums; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == nums - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
