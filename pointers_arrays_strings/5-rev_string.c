#include "main.h"

/**
* rev_string - reverses a string
* @s: string being reversed
*
* Return: nothing (void)
*/

void rev_string(char *s)
{
	int length, temp, i;

	for (length = 0 ; s[length] != '\0' ; length++)
	;
	for (i = 0; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
