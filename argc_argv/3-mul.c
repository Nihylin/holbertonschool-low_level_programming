#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @c: argc
* @v: argv
*
* Return: always 0
*/

int main(int c, char **v)
{
	int result, x, y;

	if (c != 3)
	{
		printf("Error\n");
		return (0);
	}
	x = atoi(v[1]);
	y = atoi(v[2]);
	result = x * y;
	printf("%d\n", result);
	return (0);
}
