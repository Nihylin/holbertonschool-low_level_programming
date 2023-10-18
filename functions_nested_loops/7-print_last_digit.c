#include "main.h"

/**
* print_last_digit - Entry point
*
* Description: prints the last digit of a number
* @i: integer being checked
*
* Return: always 0
*/

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	i = i % 10;
	_putchar (i + 48);
	/*
	* Cette ligne imprime le dernier chiffre de i.
	* Cela fonctionne en ajoutant 48 (la valeur ASCII de '0') à i.
	* Ainsi, si i est par exemple 3, i + 48 donnera 51,
	* ce qui correspond au caractère ASCII '3'.
	* Le caractère est ensuite affiché à l'aide de la fonction _putchar.
	*/
	_putchar ('\n');
	return (i);
}
