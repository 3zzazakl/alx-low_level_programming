#include "main.h"

/**
 * read_textfile - reads a text file and prints it to output.
 * @filename: input file.
 * @letters: number of letters to read.
 * Return: (letters that count)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read, bytes_written;
	FILE *file;
	char *buff;

	if (!filename)
		return (0);

	file = fopen(filename, "r");
	buff = malloc(sizeof(char) * letters);

	if (!file)
		return (0);

	bytes_read = fread(buff, sizeof(char), letters, file);

	if (ferror(file))
	{
		fclose(file);
		return (0);
	}

	bytes_written = fwrite(buff, sizeof(char), bytes_read, stdout);

	if (ferror(stdout))
	{
		fclose(file);
		return (0);
	}

	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	free(buff);

	return (bytes_read);
}
