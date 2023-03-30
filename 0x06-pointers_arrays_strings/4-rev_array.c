#include "main.h"

/**
 * reverse_array - reverses input array with size n
 * @a: input array
 * @n: array size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int tmp = 0;

	while (start != end)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
