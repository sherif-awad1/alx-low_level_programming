#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: the owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);








#endif
