#include "main.h"

/**
 * _strcat - concates inputs
 * @dest: string input
 * @src: string to be appended
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (start);
}
