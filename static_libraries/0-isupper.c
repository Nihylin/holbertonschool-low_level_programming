#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isupper- Entry point
 * Description: permet de vérifier si le charactère est en majuscule
 * @c: charactère défini
 * Return:  1 is c est en majuscule sinon 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
