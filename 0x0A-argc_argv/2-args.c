#include "main.h"

/**
 *main-prints the arguments it receives
 *@argc:argument count
 *@argv:argument vector
 *
 *Return:nothing
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
