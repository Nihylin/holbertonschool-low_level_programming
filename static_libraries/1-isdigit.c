#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isdigit- Entry point
 * Description: permet de vérifier si la variable est un nombre entre 1 et 9
 * @c: charactère défini
 * Return:  1 is c est un nombre sinon 0
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
