#include "main.h"

/**
* _abs - Entry point
*
* Description: computes the absolute value of an integer
* @i: integer being checked
*
* Return: always 0
*/

int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
	}
	return (i);
}
