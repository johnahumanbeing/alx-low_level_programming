#include "main.h"
/**
 *main-prints the number of arguments passed in it
 *@argc:argument count
 *@argv:argument vol
 *Return:nothing
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
