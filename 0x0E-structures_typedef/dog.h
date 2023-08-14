#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog -it creates dogs description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: just a struct containing a dogs information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
