#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _memset - set a specific value in a space of memory
 * @s: a pointer to the memory
 * @c: the specific character
 * @n: size
 * Return: a pointer to the memory space
 */
char *_memset(char *s, char c, unsigned int n)
{
	char *mem = s;

	while (n--)
		*mem++ = c;
	return (mem);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: nbr of elements
 * @size: size of element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
/**
 * show_error - print Error and exit with 98
 */
void show_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - returns the length of a string
 * @str: the giving string
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * isNumber - check if a string compose only with digits
 * @str: the giving string
 * Return: 1 (if it's only digits), 0 otherwize
 */
int isNumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;

	}
	return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: nbr of arguments
 * @argv: a pointer to pointers of arguments
 * Return: 0 (Success), 98 (Error)
 */
int main(int argc, char **argv)
{
	int len = 0, i, j, n1Digit, n2Digit, reste, mul;
	char *n1 = argv[1], *n2 = argv[2];
	int *result, *origin;

	if (argc != 3 || !isNumber(n1) || !isNumber(n2))
		show_error();
	len = _strlen(n1) + _strlen(n2);
	if (*n1 == 48 || *n2 == 48)
		printf("0\n");
	else
	{
		result = _calloc(len, sizeof(int));
		if (result == NULL)
			show_error();
		for (i = _strlen(n1) - 1; i >= 0; i--)
		{
			n1Digit = n1[i] - '0';
			reste = 0;
			for (j = _strlen(n2) - 1; j >= 0; j--)
			{
				n2Digit = n2[j] - '0';
				mul = n1Digit * n2Digit + result[i + j + 1] + reste;
				result[i + j + 1] = mul % 10;
				reste = mul / 10;
			}
			if (reste)
				result[i + j + 1] += reste % 10;
		}
		origin = result;
		while (*result == 0)
		{
			result++;
			len--;
		}
		for (i = 0; i < len; i++)
			_putchar(*(result + i) + '0');
		_putchar('\n');
		free(origin);
	}
	return (0);
}
