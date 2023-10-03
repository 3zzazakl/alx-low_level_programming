#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_ex - printing error message with its code.
 *  @error_msg: error message.
 * @error_code: code of error.
 */

void error_ex(char *error_msg, int error_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_msg);
	exit(error_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: count of text.
 * @argv: text to copy
 * Return: (0) Success.
 */
int main(int argc, char *argv[])
{
	char *from = argv[1];
	char *to = argv[2];
	char buff[BUFFER_SIZE];
	int input_fd;
	int output_fd;
	ssize_t read_bytes, write_bytes;


	if (argc != 3)
		error_ex("Usage: cp file_from file_to", 97);

	input_fd = open(from, O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", from);
		error_ex("", 98);
	}

	output_fd = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", to);
		error_ex("", 99);
	}

	read_bytes = read(input_fd, buff, BUFFER_SIZE);
	write_bytes = write(output_fd, buff, read_bytes);

	while (read_bytes > 0)
	{
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			error_ex("", 99);
		}
	}

	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		error_ex("", 98);
	}

	if (close(input_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd);
		error_ex("", 100);
	}
	if (close(output_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_fd);
		error_ex("", 100);
	}

	return (0);
}
