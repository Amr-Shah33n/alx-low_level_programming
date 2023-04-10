#include "main.h"

/**
 * _strlen - swaps the values stored at the given pointers
 * @s: pointer to input string
 *
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
