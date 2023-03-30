#include "main.h"

/**
 * _strncpy - concates inputs
 * @dest: string input
 * @src: string to be copied into dest
 * @n: number of charachters to be copied
 * Return: pointer to  string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	for (i; i < n; i++)
	{
		if (i != 0 && *src != '\0')
		{
			src++;
		}
		*dest++ = *src;
	}
	return (start);
}
