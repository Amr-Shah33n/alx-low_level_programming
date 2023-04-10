#include "main.h"

/**
 * _strspn - Checks if string s has c and returns substring starting from c
 * @s: input pointer to a string
 * @accept: acceptable string to check
 * Return: returns index of char that does not match any of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *p2;
	unsigned int i = 0;

	while (*p != '\0')
	{
		p2 = accept;
		while (*p2 != '\0')
		{
			if (*p == *p2)
			{
				i++;
				break;
			}
			else
			{
				p2++;
			}
		}
		if (*p2 == '\0')
		{
			return (i);
		}
		p++;
	}
	return (i);
}
