#include "main.h"

/**
* swap_int - swap the value of two pointers
* @a: the first pointer
* @b: the second pointer
*
* Return: nothing (void)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
