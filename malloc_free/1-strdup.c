#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter
 *
 * Return: NULL or pointer to duplicated string
*/

char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
