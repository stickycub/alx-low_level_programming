#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open_file(filename);

	if (fd == -1)
		return (0);

	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		close_file(fd);
		return (0);
	}

	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close_file(fd);
		free(buffer);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close_file(fd);
		free(buffer);
		return (0);
	}

	close_file(fd);
	free(buffer);

	return (bytes_written);
}

/**
 * open_file - Opens a file in read-only mode.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor or -1 on failure.
 */

int open_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	return (fd);
}

/**
 * close_file - Closes a file given its file descriptor.
 * @fd: The file descriptor to close.
 */

void close_file(int fd)
{
	close(fd);
}
