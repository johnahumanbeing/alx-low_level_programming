/**
 * _atoi -  converts a string to an integer
 * @s: string to convert
 * Return: the int found else 0
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int j = 0, len = 0, signe = 1;

	while (s[j++])
		len++;

	for (j = 0; j < len; j++)
	{
		if (s[j] == '-')
			signe = -(signe);
		else if (s[j] >= 48 && s[j] <= 57)
			res = 10 * res + (s[j] - '0');
		else if (res != 0)
			break;
	}

	return (signe * res);
}
