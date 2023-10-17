#include "main.h"

/**
* _isalpha - Entry point
*
* Description: checks for alphabetic character
* @c: the character checked
*
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
