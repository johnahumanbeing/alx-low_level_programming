#include "lists.h"

void beat_rabbit(void) __attribute__((constructor));

/**
 * beat_meat - prints a message before main is executed
 */

void beat_rabbit(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
