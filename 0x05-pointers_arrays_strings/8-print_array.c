#include "main.h"
#include "stdio.h"

/**
 * print_array - prints elements of array with size n
 * @a: pointer to array
 * @n: size of array
 *
 * Return: void return, prints array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%i", *a);
		}
		else
		{
			printf("%i, ", *a);
		}
		i++;
		a++;
	}
	printf("\n");
}
