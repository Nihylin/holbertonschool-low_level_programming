#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * @c: variable qui prend un charactère
 * Return:  0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
	else
	return (0);
}
