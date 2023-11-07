#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, l3, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		l1++;

	for (i = 0 ; s2[i] != '\0' ; i++)
		l2++;

	l3 = l1 + l2 + 1;

	s3 = malloc(sizeof(char) * l3);

	if (s3 == NULL)
		return (NULL);

	for (i = 0 ; i < l1 ; i++)
		s3[i] = s1[i];

	for (i = 0 ; i < l2 ; i++)
		s3[i + l1] = s2[i];

	return (s3);
}
