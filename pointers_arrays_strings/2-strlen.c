#include "main.h"
#include <string.h>

/**
 * _strlen - returns the lengh of a selected string
 * @s: string being tested
 *
 * Return: int (length of the string)
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
