#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_dog-fuction that prints a struct dog
 *@d:the main element
 *Return:if element of d is NULL,print nil, else if d
 *is NULL, print nothnig
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
