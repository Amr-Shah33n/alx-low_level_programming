#include "main.h"

/**
 * _isupper - prints if input is upper or lower char
 * @c: The character to check and print
 *
 * Return: when c is upper, 1. when c is lower return 0
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
