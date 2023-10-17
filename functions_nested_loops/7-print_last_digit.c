#include "main.h"

/**
* print_last_digit - Entry point
*
* Description: prints the last digit of a number
* @i: integer being checked
*
* Return: always 0
*/

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	i = i % 10;
	_putchar (i);
	return (i);
}
