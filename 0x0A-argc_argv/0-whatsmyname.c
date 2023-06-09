#include <stdio.h>
#include <stdlib.h>
/**
 *main -prints its name
 *
 *@argc:argument count
 *@argv:argument vol
 *Return:nothing
 */

int main(int argcUnused __attribute__((unused)), char* argv[])
{
	printf("argc = %s\n", *argv);
	return (0);
}
