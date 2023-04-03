#include "main.h"

/**
 * _memset - fills n bytes with b starting from s
 * @s: start pointer
 * @n: number of bytes to fill
 * @b: charachter to fill
 * Return: returns pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s++) = b;
	}
	return (p);
}
