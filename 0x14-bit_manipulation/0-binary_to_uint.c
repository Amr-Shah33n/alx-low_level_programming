#include "main.h"

/**
 * binary_to_uint - transforms string to unsigned int
 * @b: input string of bits
 * Return: 0 on failure or converted unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int i, j;
	unsigned int power = 1;

	if (b == NULL)
		return (0);
	for (i = 0; *b != '\0'; i++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	for (j = 0; j < i; j++)
	{
		number = number + power * (*--b - '0');
		power = 2 * power;
	}
	return (number);
}
