#include "main.h"

/**
 * _strncat - concates inputs
 * @dest: string input
 * @src: string to be appended
 * @n: number of charcters to be appended
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest++ = '\0';
	return (start);
}
