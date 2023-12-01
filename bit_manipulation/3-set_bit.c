#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value
 * @index: wanted modified bit
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
