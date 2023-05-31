#include "main.h"
/**
 *string_toupper- makes characters uppercase
 *@str: changed string to uppercase
 *Return:pointer
 */
char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - ('a' - 'A');
		}
		j++;
	}
	return (str);
}
