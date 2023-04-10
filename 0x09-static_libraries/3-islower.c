#include "main.h"

/**
 * _islower - function to check if input is lower case
 * @c: The character to check if lowercase
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
