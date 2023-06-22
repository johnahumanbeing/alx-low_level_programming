#include "function_pointers.h"

/**
 * print_name-the functions prints the name that is passed as a parameter
 * @name: the name that we are printing
 * @f: the function pointer
 *
 * Return: the function returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
