#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @dest: dest pointer
 * @src: number of bytes to fill
 * @n: number of charachters to copy
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest++) = *(src++);
	}
	return (p);
}
