#include "main.h"

/**
 * main- copies the content of a file tomanother file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int source_fd, dest _fd;
	ssize_t read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* checking no of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* opening the source file */
	source_fd = open(argv[1], O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* opening destination file */
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNIC, mode);

	if (dest_fd == -1)
	{
		dpritf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	/* writting content of file to destination using buffer */
	while ((read_bytes = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(dest_fd, buffer, read_bytes);

		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

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

	return (0);
}
