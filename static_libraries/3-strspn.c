#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string being tested
* @accept: accepted characters
*
* Return: unsigned int length (number of bytes)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s)
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				length++;
				break;
			}
			i++;
		}

		if ((accept[i]) == '\0')
		{
			return (length);
		}
		s++;
	}
	return (length);
}
