#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - to free memory allocated
 * @d: pointer to the struct
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
