#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: byte counter integer
*
* Return: doubled string (char pointer)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
