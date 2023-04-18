#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated memory
 * @d: pointer to struct to be free
 *
 * Return: Void, initializes values no return
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
