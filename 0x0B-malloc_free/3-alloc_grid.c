#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concates two input strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: pointer to concatenated string
 **/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	a = malloc(height * sizeof(int));
	if ( a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
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
