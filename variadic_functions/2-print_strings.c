#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string printed between numbers
 * @n: number of strings passed to the function
 * Return: nothing (void)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;

	char *str;
	unsigned int index = 0;

	va_start(strg, n);

	for (; index < n; index++)
	{
		str = va_arg(strg, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (index < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	putchar ('\n');
}
