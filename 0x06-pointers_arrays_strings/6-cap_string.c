#include "main.h"
/**
 *cap_string - caps first letter of words
 *@str:checkable strig
 *Return: str
 */
char *cap_string(char *str)
{
	int i, j;

	j = 'a' - 'A';
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'
					|| str[i - 1] == '.' || str[i - 1] == '?'
					|| str[i - 1] == ',' || str[i - 1] == '"'
					|| str[i - 1] == '!' || str[i - 1] == ';'
					|| str[i - 1] == '(' || str[i - 1] == ')'
					|| str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] -= j;
			}
		}
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= j;
	}
	return (str);
}
