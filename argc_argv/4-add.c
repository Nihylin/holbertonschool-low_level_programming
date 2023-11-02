#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int result = 0;

	if (c == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < c ; i++)
		{
			if (isdigit(*v[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(v[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
