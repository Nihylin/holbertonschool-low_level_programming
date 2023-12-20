#include "main.h"

/**
 * _isupper - check the code.
 *
 * @c: function parameter
 *
 * Return: 1 if lower, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
