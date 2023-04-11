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
 * str_concat - concates two input strings
 * @s1: string input 1
 * @s2: string input 2 
 *
 * Return: pointer to concatenated string
 **/
char *str_concat(char *s1, char *s2)
{
	char *a, *p;
	int size, i, j, n1, n2;

	if (s1 == NULL)
	{
		n1 = 0;
	}
	else
	{
		n1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		n2 = 0;
	}
	else
	{
		n2 = _strlen(s2);
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
