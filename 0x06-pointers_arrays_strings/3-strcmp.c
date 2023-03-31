#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: int comparison value
 */
int _strcmp(char *s1, char *s2)
{
	char *st1 = s1;
	char *st2 = s2;
	int tmp = 0;

	while (*st1 != '\0')
	{
		if (*st2 == '\0')
		{
			return (*st1);
		}
		tmp = *st1 - *st2;
		if (tmp != 0)
		{
			return (tmp);
		}
		st1++;
		st2++;
	}
	if (*st2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*st2);
	}
}
