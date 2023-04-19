#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - perfroms action funtion on every array element
 * @array: input array
 * @size: array size
 * @action: funtion to be performed on array element
 * Return: void only prints
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array || action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
