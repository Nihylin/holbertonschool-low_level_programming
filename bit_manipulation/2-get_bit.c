#include "main.h"

/**
 * get_bit - function that bites you. ooooo, spooky!
 * @n: value
 * @index: wanted bit
 * Return: bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numBits, bitValue;

	numBits = sizeof(unsigned long int) * 8;

	if (index >= numBits)
	{
		return (-1);
	}

	bitValue = (n >> index) & 1;

	return (bitValue);
}
