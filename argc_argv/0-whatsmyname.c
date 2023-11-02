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
	printf("%s\n", v[0]);
	c = c + 1; /* fucking compiler I swear dude */
	return (0);
}
