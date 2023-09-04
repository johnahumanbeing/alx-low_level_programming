#include "main.h"

/* fixing the error by spliting the main function to smaller functions */

#define BUFFER_SIZE 1024

void parse_arguments(int argc);
int open_source(char *filename);
int open_dest(char *filename, mode_t mode);
void read_source(int source_fd, int dest_fd, char *buffer);
void write_dest(int dest_fd, char *buffer, ssize_t read_bytes);
void close_files(int source_fd, int dest_fd);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	parse_arguments(argc);

	source_fd = open_source(argv[1]);

	dest_fd = open_dest(argv[2], mode);

	read_source(source_fd, dest_fd, buffer);

	close_files(source_fd, dest_fd);

	return (0);
}

/**
 * parse_arguments - parses arguments through main
 * @argc: argument count
 */
void parse_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_source - the source of the file
 * @filename: name of the file
 * Return: dest
 */
int open_source(char *filename)
{
	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(98);
	}
	return (source_fd);
}

/**
 * open_dest - used to open file in write mode
 * @filename : name of the file
 * @mode: mode to use
 * Return: dest
 */
int open_dest(char *filename, mode_t mode)
{
	int dest_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
	return (dest_fd);
}

/**
 * read_source - reads source of the file
 * @source_fd: source file
 * @dest_fd: destination file
 * @buffer: the buffer
 */
void read_source(int source_fd, int dest_fd, char *buffer)
{
	ssize_t read_bytes;

	while ((read_bytes = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_dest(dest_fd, buffer, read_bytes);
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file\n");
		exit(98);
	}
}

/**
 * write_dest - writes to the written bytes
 * @buffer: the buffer
 * @dest_fd: destination file
 * @read_bytes: reader of bytes
 */
void write_dest(int dest_fd, char *buffer, ssize_t read_bytes)
{
	ssize_t written_bytes;

	written_bytes = write(dest_fd, buffer, read_bytes);

	if (written_bytes != read_bytes)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file\n");
		exit(99);
	}
}

/**
 * close_files - closes the files
 * @source_fd: source file
 * @dest_fd:destination file
 */
void close_files(int source_fd, int dest_fd)
{
	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", dest_fd);
		exit(100);
	}
}
