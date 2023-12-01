#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first value
 * @m: second value
 * Return: count of bit flips needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipCount = 0, count = 0, size = sizeof(n) * 8;

	while (count < size)
	{
		if ((n & 1) != (m & 1))
		{
			flipCount++;
		}

		n >>= 1;
		m >>= 1;
		count++;
	}

	return (flipCount);
}
