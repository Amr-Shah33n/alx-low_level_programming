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
	int i;

	for(i = 0; i < size; i++)
	{
		int val;
		
		if(size <= 0)
			return (-1);
		val = cmp(array[i]);
		if(val != 0)
			return (i);
	}
	return (-1);
}
