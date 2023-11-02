#include <stdio.h>

/**
* main - Entry point
* @c: argc
* @v: argv
*
* Return: always 0
*/

int main(int c, char **v)
{
	int i;

	for (i = 0 ; i < c ; i++)
	{
		printf("%s\n", v[i]);
	}
	return (0);
}
