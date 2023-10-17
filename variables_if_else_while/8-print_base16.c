#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all the numbers of base 16 in
* lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, s;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar (i);
	}
	for (s = 'a' ; s <= 'f' ; s++)
	{
		putchar (s);
	}
	putchar ('\n');
	return (0);
}
