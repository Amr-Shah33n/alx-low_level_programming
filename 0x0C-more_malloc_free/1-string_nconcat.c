#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets length of input string
 * @s: pointer to input string
 *
 * Return: returns string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concates two input strings
 * @s1: string input 1
 * @s2: string input 2
 * @n: number of bytes to retrieve from s2
 * Return: pointer to concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *p;
	unsigned int size = 0, i = 0, j = 0, n1 = 0, n2 = 0;

	if (s1 != NULL)
	{
		n1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		n2 = 0;
	}
	else
	{
		if (n >= _strlen(s2))
		{
			n2 = _strlen(s2);
		}
		else
		{
			n2 = n;
		}
	}
	size = n1 + n2;
	a = malloc(size * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	p = a;
	for (i = 0; i < n1; i++)
	{
		*p++ = *s1++;
	}
	for (j = 0; j < n2; j++)
	{
		*p++ = *s2++;
	}
	*p = '\0';
	return (a);
}
