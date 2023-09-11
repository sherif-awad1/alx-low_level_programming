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

/**
 * print_dog - print a struct dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
/**
 * *new_dog - creat a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: NULL if fail or dog for new dog
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strleng - get the length of the string
 * @s: the string should get length
 * Return: leng
 */
int _strleng(char *s);
/**
 * *_strcpy - to copy strang
 * @end: copy the string to it
 * @start: the string we want to copy
 * Return: the string copy
 */
char *_strcpy(char *end, char *start);

/**
 * free_dog - to free memory allocated
 * @d: pointer to the struct
 */
void free_dog(dog_t *d);


#endif /* stract dog - define stract with name age and owner */

