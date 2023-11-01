#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area
* @b: constant byte
* @n: number of bytes
*
* Return: char pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
