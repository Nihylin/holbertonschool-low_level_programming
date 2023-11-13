#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the doggo
 * @age: age of the doggo
 * @owner: snoop doggy dogg keskon atten
 * Return: NULL or pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if ((dog->name == NULL) || (dog->owner == NULL))
	{
		free(dog);
		return (NULL);
	}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
