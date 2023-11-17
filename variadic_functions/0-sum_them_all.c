#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 * Return: int (sum)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int index;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
