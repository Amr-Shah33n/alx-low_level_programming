#include "main.h"

/**
 * _strspn - Checks if string s has c and returns substring starting from c
 * @s: input pointer
 * @accept: number of bytes to fill
 * Return: returns pointer to substring if char is found and null if not
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
