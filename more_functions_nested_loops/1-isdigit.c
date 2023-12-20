#include "main.h"

/**
 * _isdigit - check the code.
 *
 * @c: function parameter
 *
 * Return: 1 if lower, 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
