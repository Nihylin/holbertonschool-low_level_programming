#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string printed between numbers
* @n: number of integers
* Return: nothing (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listnumbers;
	unsigned int index;
	int numbers;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(listnumbers, n);

	for (index = 0; index < n; index++)
	{
		numbers = va_arg(listnumbers, int);
		printf("%d", numbers);
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listnumbers);
}
