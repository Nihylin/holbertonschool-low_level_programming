#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string being searched
* @accept: accepted bytes
*
* Return: searched string at the first occurence of the accepted byte OR null
*/

char *_strpbrk(char *s, char *accept)
{
	int length;

	while (*s)
	{
		for (length = 0; accept[length]; length++)
		{
			if (accept[length] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
