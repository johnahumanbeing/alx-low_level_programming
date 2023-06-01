#include "main.h"
/**
 *leet- encodes a string into 1337
 *@str:string to encode
 *Return:string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char cap_array[] = {'a', 'e', 'o', 't', 'l'};
	char sml_array[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cap_array[j] || str[i] == cap_array[j] - 32)
				str[i] = sml_array[j];
		}
		i++;
	}
	return (str);
}
