#include "main.h"

/**
 * clear_bit - clears bit at specified index
 * @n: number pointer
 * @index: bit to be cleared
 * Return: 1 on succes -1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(*n) * 8 <= index)
		return (-1);
	*n = ~*n;
	*n = *n | (1 << index);
	*n = ~*n;
	return (0);
}
