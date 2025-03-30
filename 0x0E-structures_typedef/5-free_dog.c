#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees previously created data type dog_t.
 * @d: pointer to dog_t to be freed.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
