#include "main.h"

/**
* _islower - Entry point
*
* Description: checks for lowercase character
* @c: the character checked
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
