#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: number to factorize
*
* Return: int (-1, 1 or factorized number)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
