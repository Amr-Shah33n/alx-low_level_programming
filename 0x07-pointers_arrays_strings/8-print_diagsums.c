#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonals of input array
 * @a: 2D array
 * @size: array size
 * Return: void return, only prints sum
 **/
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + *(a + (i * size) + j);
			}
			if (i + j == size - 1)
			{
				sum2 = sum2 + *(a + (i * size) + j);
			}
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
