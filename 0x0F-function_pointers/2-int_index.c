#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns index of first element matching defined condition
 * @array: input array
 * @size: array size
 * @cmp: funtion to be performed on array element and returns value
 * Return: void only prints
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val;

	if (size <= 0 || array || cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		val = cmp(array[i]);
		if (val != 0)
			return (i);
	}
	return (-1);
}
