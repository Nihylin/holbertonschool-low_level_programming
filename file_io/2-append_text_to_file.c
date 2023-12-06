#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name (path) of the file being appended
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t txtLength = 0, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDWR | O_APPEND);

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
