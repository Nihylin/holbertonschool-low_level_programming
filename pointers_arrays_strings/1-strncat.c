#include "main.h"

/**
* _strncat - concatenetes two strings
* @dest: destination string
* @src: source string
* @n: byte counter integer
*
* Return: concateneted string (char pointer)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
	;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[length + i] = src[i];
		i++;
	}
	for (length = 0; dest[length] != '\0'; length++)
	;
	dest[length + 1] = '\0';
	return (dest);
}
