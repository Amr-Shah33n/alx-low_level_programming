#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: The character to check
 *
 * Return: when c is a digit, 1. when c is not a digit return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
