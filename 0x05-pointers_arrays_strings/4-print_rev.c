#include "main.h"

/**
 * print_rev - prints every second char of input string
 * @s: pointer to input string
 *
 * Return: void return, prints string
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	char *end = s + length - 1;

	while (s <= end)
	{
		_putchar(*end);
		end--;
	}
	_putchar(10);
}
/**
 * _strlen - returns size of string
 * @s: pointer to input string
 *
 * Return: Int string size
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
