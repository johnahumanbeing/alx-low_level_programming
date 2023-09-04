#include "main.h"

/**
 * read_textfile - reads a file and prints it to the POSIX standard output
 * @filename: the provided file
 * @letters: number of letters to read and print
 *
 * Return:if the file can not be opened or read, return 0,
 *  if filename is NULL return 0,
 *  if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer = malloc(letters);
	ssize_t check_bytes;
	/* checking if the file exists */
	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	/* reading letters */
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		free(buffer);
		return (0);
	}
	/* checking bytes in the file with  fread */
	check_bytes = fread(buffer, sizeof(char), letters, fp);

	if (check_bytes == 0)
	{
		fclose(fp);
		free(buffer);
		/* if error occurs returns 0 */
		return (0);
	}
	/* writing to standard output */
	fwrite(buffer, sizeof(char), check_bytes, stdout);
	/* closing the file */
	fclose(fp);
	free(buffer);

	return (check_bytes);
}
