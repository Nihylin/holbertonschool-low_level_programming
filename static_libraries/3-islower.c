#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * @c: variable qui prend un charactère
 * Return:  0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
