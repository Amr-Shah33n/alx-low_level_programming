#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dog struct
 * @d: pointer to struct that will be initializeed
 *
 * Return: Void, initializes values no return
 **/
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
	{
		exit(3);
	}
	name = (d->name != NULL) ? d->name : "nil";
	owner = (d->owner != NULL) ? d->owner : "nil";
	age = d->age;
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
