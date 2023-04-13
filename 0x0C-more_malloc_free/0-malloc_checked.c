#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns array with allocatoed memory
 * @b: size to be allocated
 * Return: pointer to allocated memory or NULL on failure
 **/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		free(a);
		exit(98);
	}
	return (a);
}
