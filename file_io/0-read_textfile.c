#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name (path) of the file being read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it can read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, readFile, writeFile;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file < 0)
	{
		return (0);
	}

	buffer = malloc(letters);

	readFile = read(file, buffer, letters);

	if (readFile < 0)
	{
		close(file);
		return (0);
	}

	writeFile = write(STDOUT_FILENO, buffer, readFile);

	if (writeFile < 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);

	return (writeFile);
}
