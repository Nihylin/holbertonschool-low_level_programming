#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string being cut
 *
 * Return: nothing (void)
 */

void puts2(char *str)
{
	int i = 0;
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
