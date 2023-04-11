#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array with specified size filled with char c
 * @size: array size
 * @c: character to be initialzed
 * Return: pointer to array or NULL on failure
 **/
char *create_array(unsigned int size, char c)
{
	char *a, *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	p = a;
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (a);
}
