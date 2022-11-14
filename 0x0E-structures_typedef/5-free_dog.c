#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: the dog struct
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
