#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes dog struct
 * @d: pointer to struct that will be initializeed
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Void, initializes values no return
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
