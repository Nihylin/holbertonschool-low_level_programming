#include "main.h"

/**
 * print_line - print from 0 to 9.
 *
 * @n: parameter.
 *
 * Return: no return.
 */

void print_line(int n)
{
	int start;

	if (n > 0)
	{
		for (start = 0; start < n; start++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
