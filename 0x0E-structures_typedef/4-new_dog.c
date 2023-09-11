#include "dog.h"
#include <stdlib.h>

/**
 * _strleng - get the length of the string
 * @s: the string should get length
 * Return: leng
 */
int _strleng(char *s)
{
	int leng = 0;

	while (*s++)
	{
		leng++;
	}
	return (leng);
}

/**
 * *_strcpy - to copy strang
 * @end: copy the string to it
 * @start: the string we want to copy
 * Return: the string copy
 */

char *_strcpy(char *end, char *start)
{
	int i;

	for (i = 0; start[i]; i++)
	{
		end[i] = start[i];
	}
	end[i] = '\0';

	return (end);
}

/**
 * *new_dog - creat a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: NULL if fail or dog for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strleng(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strleng(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
