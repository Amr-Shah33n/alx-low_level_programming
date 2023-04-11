#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - concates two input strings
 * @width: array width
 * @height: array height
 * Return: pointer to allocated 2D memory array
 **/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			a[j][k] = 0;
		}
	}
	return (a);
}
