#include "main.h"
/**
 *_strcmp-compares two strings
 *@s1:first copmparable string
 *@s2:second comparable string
 *Return:1 if success 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
