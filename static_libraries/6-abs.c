#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Description: calcule la valeur absolue d'un nombre entier
 * @n: variable d'un nombre entier
 * Return:  0
 */
int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return (n - n - n);
	}
}
