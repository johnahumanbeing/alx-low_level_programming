#include "main.h"
/**
 *main-prints all arguments its receives
 *@argc:argument count
 *@argv:argument array
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
