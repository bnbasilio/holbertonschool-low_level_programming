#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if successful, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, write_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (text_len = 0; text_content[text_len]; text_len++)
		;

	write_len = write(fd, text_content, text_len);
	close(fd);

	if (text_len != write_len)
		return (-1);

	return (1);
}
