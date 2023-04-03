#include "main.h"

/**
 * _strchr - Checks if string s has c and returns substring starting from c
 * @s: input pointer
 * @c: number of bytes to fill
 * Return: returns pointer to substring if char is found and null if not
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	*p = '0';
	return (p);
}
