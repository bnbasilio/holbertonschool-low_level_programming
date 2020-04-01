#include "holberton.h"

/**
 * read_textfile - read a text file
 * @filename: filename string
 * @letters: amount of letters
 *
 * Return: ssize_t, return of read or failure code
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declarations */
	int fd;
	char *buffer;
	ssize_t read_len, write_len;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	read_len = read(fd, buf, letters);
	if (read_len == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[read_len] = '\0';

	close(fd);

	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);
	if (write_len == -1)
		return (0);

	return (read_len);
}
