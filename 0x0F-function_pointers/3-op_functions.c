#include "3-calc.h"

/**
 * op_add - functions performs addition
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the addition between a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function performs subtractions
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the subtraction between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function performs multiplication
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the multiplication between a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function performs division
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the division between a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod -  returns the remainder of the division
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the remainder of a division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
