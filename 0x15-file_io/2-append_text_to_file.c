#include "main.h"

/**
 * append_text_to_file- appends text at the end of a file
 * @filename: name of the file
 * @text_content: the null terminated string to addat he end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int res = -1;
	/* checking for filename */
	if (filename == NULL)
	{
		return (-1);
	}
	/* opening the file with fopen */
	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}
	/* checking foe null terminated string */
	if (text_content != NULL)
	{
		if (fputs(text_content, fp) != EOF)
		{
			res = 1;
		}
	}
	/* closing the file with fclose */
	fclose(fp);

	return (res);
}
