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
	printf("%d\n", (c - 1));
	v = v + 1; /* fucking compiler I swear dude */
	return (0);
}
