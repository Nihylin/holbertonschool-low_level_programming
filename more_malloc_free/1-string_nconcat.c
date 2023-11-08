#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, l3, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		l1++;

	for (i = 0 ; s2[i] != '\0' ; i++)
		l2++;

	if (n > l2)
		n = l2;

	l3 = l1 + n + 1;

	s3 = malloc(sizeof(char) * l3);

	if (s3 == NULL)
		return (NULL);

	for (i = 0 ; i < l1 ; i++)
		s3[i] = s1[i];

	for (i = 0 ; i < n ; i++)
		s3[i + l1] = s2[i];

	return (s3);
}
