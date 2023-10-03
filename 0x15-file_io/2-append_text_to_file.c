#include "main.h"

/**
 * append_text_to_file - append text to the file.
 * @filename: input file.
 * @text_content: the text to add to the file
 * Return: (1) or (-1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	closs(fd);
	return (1);
}
