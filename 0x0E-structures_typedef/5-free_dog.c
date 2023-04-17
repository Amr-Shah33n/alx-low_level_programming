#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated memory
 * @d: pointer to struct to be free
 *
 * Return: Void, initializes values no return
 **/
void free_dog(struct dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
