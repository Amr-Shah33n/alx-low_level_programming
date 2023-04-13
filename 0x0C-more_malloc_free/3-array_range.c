#include <stdlib.h>
#include "main.h"

/**
 * array_range - returns array with allocatoed memory
 * @min: starting value of the array
 * @max: last value stored in the array
 * Return: pointer to array or NULL on failure
 **/
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (min <= max)
	{
		a[i++] = min++;
	}
	return (a);
}
