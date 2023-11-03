#include "main.h"

/**
* _sqrt_recursion_2 - returns the natural square root of a number
* @n: int being square rooted (is that even a word lmao who cares)
* @i: int (index)
*
* Return: int (square rooted integer)
*/

int _sqrt_recursion_2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_2(n, i + 1));
	}
}

/**
* _sqrt_recursion - returns the fonction sqrt_recursion_2
* @n: int being square rooted
*
* Return: int (square root of n)
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_2(n, 0));
}
