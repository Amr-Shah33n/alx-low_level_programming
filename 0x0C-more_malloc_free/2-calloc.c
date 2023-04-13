#include <stdlib.h>
#include "main.h"

/**
 * _calloc - returns array with allocatoed memory
 * @nmeb: number of elements
 * @size: size of each element
 * Return: pointer to array or NULL on failure
 **/
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *a;
	char *p;
	unsigned int i = 0;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmeb);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	p = a;
	while (i < size * nmeb)
	{
		p[i++] = 0;
	}
	return (a);
}
