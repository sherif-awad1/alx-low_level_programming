#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: ownername
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to the strut name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner);





#endif /* stract dog - define stract with name age and owner */

