#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to file
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, write_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (text_len = 0; text_content[text_len]; text_len++)
		;

	write_len = write(fd, text_content, text_len);

	if (write_len != text_len)
		return (-1);

	return (1);
}
