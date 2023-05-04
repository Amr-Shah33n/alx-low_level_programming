#include "main.h"

/**
 * set_bit - clears bit at specified index
 * @n: number pointer
 * @index: bit to set
 * Return: 1 on succes -1
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(*n) * 8 <= index)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
