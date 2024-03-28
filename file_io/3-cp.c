#include "main.h"
#include <stdio.h>

void close_files(int fd_source, int fd_dest);

/**
 * close_files - Closes file descriptors and handles errors.
 *
 * @fd_source: The source file descriptor.
 *
 * @fd_dest: The destination file descriptor.
 */

void close_files(int fd_source, int fd_dest)
{
	if (close(fd_source) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	if (close(fd_dest) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of arguments.
 *
 * @argv: The arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd_source, fd_dest, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest < 0)
	{
		close(fd_source);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(fd_source, buffer, 1024)) > 0)
	{
		w = write(fd_dest, buffer, r);
		if (w != r)
		{
			close_files(fd_source, fd_dest);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r < 0)
	{
		close_files(fd_source, fd_dest);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_files(fd_source, fd_dest);
	return (0);
}
