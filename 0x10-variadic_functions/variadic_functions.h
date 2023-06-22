#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - creates a struct for printing
 * @specifer: symbol representing data types
 * @print_func: function pointer that pointers to the function that
 * prints a data type that corresponds to the specifer
 */

typedef struct print
{
	char *specifer;
	void (*print_func)(va_list arg);
} print_t;


int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
