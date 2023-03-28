#include "main.h"

/**
 * swap_int - swaps two int inputs
 * @a: pointer to input int
 * @b: pointer to input int
 *
 * Return: void return, swaps two int values
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
