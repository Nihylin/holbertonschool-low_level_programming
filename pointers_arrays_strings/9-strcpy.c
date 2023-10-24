#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: destination string
* @src: source string
*
* Return: dest pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length;

	for (length = 0 ; src[length] != '\0' ; length++)
		;
	for (; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
