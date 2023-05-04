#include "main.h"

/**
 * get_bit - gets value of bit at specified index
 * @n: number
 * @index: index of desired bit
 * Return: value of bit at specified index on succes or  -1
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int tmp = 0;

	if (sizeof(n) * 8 <= index)
		return (-1);
	tmp = 1 & (n >> index);
	return (tmp);
}
