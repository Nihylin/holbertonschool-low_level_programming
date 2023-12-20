#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 time.
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int number, loop;

	for (loop = 0; loop < 10; loop++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
