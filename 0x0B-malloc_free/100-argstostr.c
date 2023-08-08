#include "main.h"
#include <stdlib.h>
/**
 *argstostr-conncentates all arguments in the program
 *@ac:the number of arguments
 *@av:our pointer to new array of string
 *
 *Return:pointer to new array
 */
char *argstostr(int ac, char **av)
{
	int i, j, index, len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = ac;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[len] = '\0';
/*written by john for johns */
	return (str);
}
