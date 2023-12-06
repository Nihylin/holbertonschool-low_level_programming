#include "main.h"

/**
 * create_file - creates a file
 * @filename: name (path) of the file being created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	size_t txtLength = 0, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file < 0)
	{
		return (0);
	}

	if (text_content != NULL)
	{
		while (text_content[txtLength] != '\0')
		{
			txtLength++;
		}

		bytesWritten = write(file, text_content, txtLength);

		if (bytesWritten != txtLength)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
