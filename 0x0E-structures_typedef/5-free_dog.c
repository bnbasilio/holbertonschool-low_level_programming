#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees dogs
 *@d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);
	free(d->name);
	free(d->owner);
	free(d);
}

