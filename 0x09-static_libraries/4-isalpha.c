#include "main.h"

/**
 * _isalpha - function to check if input is an alphabet
 * @c: The character to check if lowercase
 * Return: 1 if lowercase 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
