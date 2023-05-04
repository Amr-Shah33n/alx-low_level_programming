#include "main.h"

/**
 * flip_bits - gets count of bits different between two inputs
 * @n: number one
 * @m: number two
 * Return: count of bits to be changed
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	unsigned long int n_xor_m = n ^ m;

	while (n_xor_m != 0)
	{
		if ((n_xor_m & 1) == 1)
			diff++;
		n_xor_m = n_xor_m >> 1;
	}
	return (diff);
}
