#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets length of input string
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

/**
 * _strdup - returns a duplicate of a string in a new memory location
 * @str: input string to be copied
 *
 * Return: pointer to array or NULL on failure
 **/
char *_strdup(char *str)
{
	char *a, *p;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	a = malloc(size * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	p = a;
	for (i = 0; i < size + 1; i++)
	{
		*p++ = *str++;
	}
	return (a);
}
