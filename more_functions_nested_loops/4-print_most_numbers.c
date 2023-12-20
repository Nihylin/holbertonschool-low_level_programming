#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 but not 2 and 4.
 *
 * Return: no return.
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 2 && number != 4)
			_putchar(number + '0');
	}
	_putchar('\n');
}
