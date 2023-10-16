#include <stdio.h>

/**
* main - Entry point
*
* Description: prints the alphabet in lowercase, and then in 
* uppercase, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar (c);
	}
	return (0);
}
