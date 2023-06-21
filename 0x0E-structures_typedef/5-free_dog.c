#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the memory allocated to struct dog.
 * @d: variable to be freed.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
