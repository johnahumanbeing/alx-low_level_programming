#include "main.h"

/**
 * _strlen - returns lenght of string
 * @str: giving string
 *
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t len = 0;
	int i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *  file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t written_bytes;
	/* checking if filename exists */
	if (filename == NULL)
	{
		return (-1);
	}
	/* the file permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
	{
		return (-1);
	}
	/* if found null an empty file is created */
	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, _strlen(text_content));

		if (written_bytes == -1)
		{
			/* closing the file */
			close(fd);
			/* -1 upon error */
			return (-1);
		}
	}

	close(fd);
	/* 1 on success */
	return (1);
}
