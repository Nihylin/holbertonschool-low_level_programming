#include "main.h"

/**
 * main - does the stuff it's supposed to do lmao
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char buffer[1024];
	int source, destination, bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s source destination\n", argv[0]);
		exit(97);
	}

	source = open(argv[1], O_RDONLY);

	if (source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (destination < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytesRead = read(source, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(destination, buffer, bytesRead);

		if (bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytesRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(100);
	}

	if (close(destination) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}

	if (close(source) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}

	return (0);
}
