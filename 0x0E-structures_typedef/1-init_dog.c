#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a veriavle of stract dog
 * @d: pointer to the strut name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 * Return: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
