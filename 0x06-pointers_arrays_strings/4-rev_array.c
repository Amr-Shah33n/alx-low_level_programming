#include "main.h"

/**
 * reverse_array - reverses input array with size n
 * @a: input array
 * @n: array size n
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
