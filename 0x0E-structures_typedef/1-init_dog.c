#include "dog.h"
#include <stddef.h>
/**
 *init_dog-function that initializes avariable of type struct dog
 *@d:the pointer to a dog variable
 *@name:name of dogy
 *@age:age  of dogy
 *@owner:the owner of dogy
 *Return:0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
